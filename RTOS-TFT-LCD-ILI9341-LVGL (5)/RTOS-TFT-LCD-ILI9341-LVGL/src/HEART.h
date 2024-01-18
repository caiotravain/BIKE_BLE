
#include "registers.h"


#define BEATDETECTOR_INIT_HOLDOFF                2000    // in ms, how long to wait before counting
#define BEATDETECTOR_MASKING_HOLDOFF             200     // in ms, non-retriggerable window after beat detection
#define BEATDETECTOR_BPFILTER_ALPHA              0.6     // EMA factor for the beat period value
#define BEATDETECTOR_MIN_THRESHOLD               20      // minimum threshold (filtered) value
#define BEATDETECTOR_MAX_THRESHOLD               800     // maximum threshold (filtered) value
#define BEATDETECTOR_STEP_RESILIENCY             30      // maximum negative jump that triggers the beat edge
#define BEATDETECTOR_THRESHOLD_FALLOFF_TARGET    0.3     // thr chasing factor of the max value when beat
#define BEATDETECTOR_THRESHOLD_DECAY_FACTOR      0.99    // thr chasing factor when no beat
#define BEATDETECTOR_INVALID_READOUT_DELAY       2000    // in ms, no-beat time to cause a reset
#define BEATDETECTOR_SAMPLES_PERIOD              10      // in ms, 1/Fs
/* Botao da placa */
#define BUT_PIO     PIOA
#define BUT_PIO_ID  ID_PIOA
#define BUT_PIO_PIN 11
#define BUT_PIO_PIN_MASK (1 << BUT_PIO_PIN)


#define LED1_PIO   PIOC
#define LED1_PIO_ID ID_PIOC
#define LED1_PIO_IDX     8
#define LED1_PIO_IDX_MASK  (1<<LED1_PIO_IDX)

#define LED4_PIO   PIOA
#define LED4_PIO_ID ID_PIOA
#define LED4_PIO_IDX     0
#define LED4_PIO_IDX_MASK  (1<<LED4_PIO_IDX)

#define LED2_PIO   PIOC
#define LED2_PIO_ID ID_PIOC
#define LED2_PIO_IDX     30
#define LED2_PIO_IDX_MASK  (1<<LED2_PIO_IDX)

#define LED3_PIO   PIOB
#define LED3_PIO_ID ID_PIOB
#define LED3_PIO_IDX     2
#define LED3_PIO_IDX_MASK  (1<<LED3_PIO_IDX)


/** RTOS  */
#define TASK_OLED_STACK_SIZE                (1024*6/sizeof(portSTACK_TYPE))
#define TASK_OLED_STACK_PRIORITY            (tskIDLE_PRIORITY)

extern void vApplicationStackOverflowHook(xTaskHandle *pxTask,  signed char *pcTaskName);
extern void vApplicationIdleHook(void);
extern void vApplicationTickHook(void);
extern void vApplicationMallocFailedHook(void);
extern void xPortSysTickHandler(void);

/** prototypes */
void but_callback(void);
static void BUT_init(void);
SemaphoreHandle_t xSemaphoreDown;



/************************************************************************/
/* TASKS                                                                */
/************************************************************************/
int8_t max30100_i2c_bus_write(uint8_t dev_addr, uint8_t reg_addr, uint8_t *reg_data, uint8_t cnt)
{
	int32_t ierror = 0x00;

	twihs_packet_t p_packet;
	p_packet.chip         = dev_addr;
	p_packet.addr[0]      = reg_addr;
	p_packet.addr_length  = 1;
	p_packet.buffer       = reg_data;
	p_packet.length       = cnt;

	ierror = twihs_master_write(TWIHS2, &p_packet);

	return (int8_t)ierror;
}

int8_t max30100_i2c_bus_read(uint8_t dev_addr, uint8_t reg_addr, uint8_t *reg_data, uint8_t cnt)
{
	int32_t ierror = 0x00;

	twihs_packet_t p_packet;
	p_packet.chip         = dev_addr;
	p_packet.addr[0]      = reg_addr;
	p_packet.addr_length  = 1;
	p_packet.buffer       = reg_data;
	p_packet.length       = cnt;

	ierror = twihs_master_read(TWIHS2, &p_packet);

	return (int8_t)ierror;
}
void max30100_i2c_init(void)
{
	// Enable peripheral clock for TWIHS0
	pmc_enable_periph_clk(ID_TWIHS2);

	// Configure TWIHS2 options
	twihs_options_t opt;
	opt.master_clk = sysclk_get_cpu_hz();
	opt.speed = 400000;
	twihs_master_init(TWIHS2, &opt);
	// set P D 28 to scl and P D 12 to sda

	// Enable peripheral clock for PIO controllers
	pmc_enable_periph_clk(ID_PIOD);
	pio_set_peripheral(PIOD, PIO_TYPE_PIO_PERIPH_C, 1 << 27);
	pio_set_peripheral(PIOD, PIO_TYPE_PIO_PERIPH_C, 1 << 28);
}


// calculate heart rate from the raw data
#define BUFFER_SIZE 32
#define HEART_BEAT_TIMEOUT_MS 2000

uint32_t irBuffer[BUFFER_SIZE]; // Infrared sensor data
uint32_t redBuffer[BUFFER_SIZE]; // Red sensor data




#define  MEAN_FILTER_SIZE 5
typedef struct meanDiffFilter_t {
	float values[MEAN_FILTER_SIZE];
	int index;
	float sum;
	int count;
} meanDiffFilter_t;

typedef struct butterworthFilter_t
{
	float v[2];
	float result;
}butterworthFilter_t;

meanDiffFilter_t filterValues = { {0}, 0, 0, 0 };
butterworthFilter_t butter ;

float meanDiff(float M, meanDiffFilter_t* filterValues)
{
	float avg = 0;

	filterValues->sum -= filterValues->values[filterValues->index];
	filterValues->values[filterValues->index] = M;
	filterValues->sum += filterValues->values[filterValues->index];

	filterValues->index++;
	filterValues->index = filterValues->index % MEAN_FILTER_SIZE;

	if(filterValues->count < MEAN_FILTER_SIZE)
	filterValues->count++;

	avg = filterValues->sum / filterValues->count;
	return avg - M;
}



float dcRemoval(float x, float* prev_w, float alpha)
{
	float w = x + alpha * *prev_w;
	float result = w - *prev_w;
	*prev_w = w;
	return result;
}



void lowPassButterworthFilter( float x, butterworthFilter_t * filterResult )
{
	filterResult->v[0] = filterResult->v[1];

	//Fs = 100Hz and Fc = 10Hz
	//filterResult->v[1] = (2.452372752527856026e-1 * x) + (0.50952544949442879485 * filterResult->v[0]);

	//Fs = 100Hz and Fc = 4Hz
	filterResult->v[1] = (1.367287359973195227e-1 * x) + (0.72654252800536101020 * filterResult->v[0]); //Very precise butterworth filter

	filterResult->result = filterResult->v[0] + filterResult->v[1];
}





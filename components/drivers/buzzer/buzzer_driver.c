#include "buzzer_driver.h"

#define BUZZER_TIMER      LEDC_TIMER_0
#define BUZZER_MODE       LEDC_LOW_SPEED_MODE
#define BUZZER_CHANNEL    LEDC_CHANNEL_0
#define BUZZER_RESOLUTION LEDC_TIMER_10_BIT

static gpio_num_t buzzer_pin;

void buzzer_init(gpio_num_t pin){

        buzzer_pin = pin;

        ledc_timer_config_t timer_cfg = {
            .speed_mode  = BUZZER_MODE,
            .timer_num =  BUZZER_TIMER,
            .duty_resolution = BUZZER_RESOLUTION,
            .freq_hz = 2000,
            .clk_cfg = LEDC_AUTO_CLK
        };
        ledc_timer_config(&timer_cfg);

        ledc_channel_config_t channel_cfg = {
            .gpio_num = buzzer_pin,
            .speed_mode = BUZZER_MODE,
            .channel = BUZZER_CHANNEL,
            .timer_sel = BUZZER_TIMER,
            .duty = 0,
            .hpoint = 0
        };
        ledc_channel_config(&channel_cfg);
}

buzzer_status_t buzzer_start(uint32_t freq_hz, uint8_t duty_percent ){

    if(duty_percent > 100) return BUZZER_ERROR;


    uint32_t max_duty = (1U << BUZZER_RESOLUTION) - 1U;
    uint32_t duty = (max_duty * duty_percent) / 100U;


    ledc_set_freq(BUZZER_MODE,BUZZER_TIMER,freq_hz);
    ledc_set_duty(BUZZER_MODE, BUZZER_CHANNEL, duty);
    ledc_update_duty(BUZZER_MODE,BUZZER_CHANNEL);


    return BUZZER_OK;
}

void buzzer_stop(void)
{
    ledc_set_duty(BUZZER_MODE, BUZZER_CHANNEL, 0);
    ledc_update_duty(BUZZER_MODE, BUZZER_CHANNEL);
}
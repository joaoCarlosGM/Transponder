#pragma once

#include "driver/ledc.h"
#include <stdint.h>


typedef enum {
    BUZZER_OK = 0,
    BUZZER_ERROR
} buzzer_status_t;

void buzzer_init(gpio_num_t pin);
buzzer_status_t buzzer_start(uint32_t freq_hz, uint8_t duty_percent );
void buzzer_stop(void);


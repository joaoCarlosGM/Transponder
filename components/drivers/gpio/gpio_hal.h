#pragma once 

#include "driver/gpio.h"
#include <stdbool.h>

typedef enum {
    GPIO_HAL_OK = 0,
    GPIO_HAL_ERROR 

} gpio_hal_status_t;

gpio_hal_status_t gpio_hal_init_output(gpio_num_t pin);
gpio_hal_status_t gpio_hal_set(gpio_num_t pin, bool level);



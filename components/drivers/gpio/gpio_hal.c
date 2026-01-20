#include "gpio_hal.h"

gpio_hal_status_t gpio_hal_init_output(gpio_num_t pin){

    gpio_config_t cfg =
    {
        .pin_bit_mask = (1ULL << pin),
        .mode = GPIO_MODE_OUTPUT,
        .pull_down_en = GPIO_PULLDOWN_DISABLE,
        .pull_up_en = GPIO_PULLUP_DISABLE,
        .intr_type = GPIO_INTR_DISABLE
    };

    if( gpio_config(&cfg) != ESP_OK ) return GPIO_HAL_ERROR;

    return GPIO_HAL_OK;

    }
gpio_hal_status_t  gpio_hal_set(gpio_num_t pin, bool level)
{
        return (gpio_set_level(pin, level) == ESP_OK )
        ? GPIO_HAL_OK
        : GPIO_HAL_ERROR;
}

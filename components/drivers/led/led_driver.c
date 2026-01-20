#include "led_driver.h"
#include "gpio_hal.h"

static gpio_num_t led_tx_pin;
static gpio_num_t led_rx_pin;

void led_init(gpio_num_t pin_rx, gpio_num_t pin_tx ){

    led_tx_pin = pin_tx;
    led_rx_pin = pin_rx;

    gpio_hal_init_output(pin_tx);
    gpio_hal_set( pin_tx , false );

    gpio_hal_init_output(pin_rx);
    gpio_hal_set( pin_rx , false );

}

void led_set_tx(led_tx_state_t state ){
    gpio_hal_set(led_tx_pin, (state == LED_TX_ON));
}

void led_set_rx(led_rx_state_t state ){
    gpio_hal_set(led_rx_pin, (state == LED_RX_ON));
}
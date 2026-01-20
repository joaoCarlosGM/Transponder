#pragma once

#include "driver/gpio.h"

typedef enum {
    LED_TX_OFF = 0,
    LED_TX_ON
} led_tx_state_t;

typedef enum {
    LED_RX_OFF = 0,
    LED_RX_ON
} led_rx_state_t;

void led_init(gpio_num_t pin_rx, gpio_num_t pin_tx );
void led_set_tx(led_tx_state_t state);
void led_set_rx(led_rx_state_t state);

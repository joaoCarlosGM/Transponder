idf_component_register(
    SRCS
        "led/led_driver.c"
        "buzzer/buzzer_driver.c"
        "gpio/gpio_hal.c"
    INCLUDE_DIRS
        "."
        "led"
        "buzzer"
        "gpio"
        REQUIRES
        esp_driver_ledc
        esp_driver_gpio
       
    
)
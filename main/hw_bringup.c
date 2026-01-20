#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_task.h"
#include "esp_log.h"
#include "hw_bringup.h"

#include "led_driver.h"
#include "buzzer_driver.h"

#define TAG "HW_BRINGUP"

#define LED_TX      GPIO_NUM_35
#define BUZZER_PIN  GPIO_NUM_4
#define LED_RX      GPIO_NUM_5

void hw_bringup_run(void)
{
    ESP_LOGI(TAG, "Iniciando hardware bring-up");

    led_init(LED_TX,LED_RX);
    buzzer_init(BUZZER_PIN);

    while (1) {
        ESP_LOGI(TAG, "LED ON | Buzzer ON");
        
        led_set_tx(LED_TX_ON);
        led_set_rx(LED_RX_ON);
        
        buzzer_start(
            4000, //Frequência; 
            95   // Volume;
        );
        vTaskDelay(pdMS_TO_TICKS(300));

        ESP_LOGI(TAG, "LED OFF | Buzzer OFF");
        led_set_tx(LED_TX_OFF);
        led_set_rx(LED_RX_OFF);
        buzzer_stop();
        vTaskDelay(pdMS_TO_TICKS(300));
    }
}

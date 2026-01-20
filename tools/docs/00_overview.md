# Transponder Firmaware

## Objetivo 
Firmware embarcado para ESP32-S3 destinado a comunicação LoRa com múltiplos nós,
sincronização temporal via GPS, controle TDMA, indicação visual e sonora de estado,
e interface de configuração local.

# Características principais
- Comunicação LoRa ponto-a-ponto
- Scheduler TDMA sincronização por GPS
- FSM Centralizada de contorle
- Interface visual (OLED + LED ring)
- Interface sonoro (Buzzer)
- Arquitetura modelar baseada em ESP-IDF


# Plataforma
- MCU: ESP32-S3.
- Fremawork: ESP-IDF V5.3.3 
- RTOS: FreeRTOS (Nativo ESP-IDF)
# Tasks e Prioridades

| Task              | Prioridade | Core | Função                       |
|-------------------|------------|------|------------------------------|
| system_task       | 5          | 0    | Boot e eventos globais       |
| lora_task         | 4          | 1    | Comunicação LoRa             |
| tdma_task         | 4          | 1    | Scheduler TDMA               |
| gps_task          | 3          | 0    | Aquisição de tempo e posição |
| display_task      | 2          | 0    | Atualização OLED             |
| led_ring_task     | 1          | 0    | Feedback visual              |
| buzzer_task       | 1          | 0    | Feedback sonoro              |

## Observações
- Tasks de hardware não implementam lógica de decisão.
- Manager FSM coordena ações.

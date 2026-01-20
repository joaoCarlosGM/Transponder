# Abstração de Hardware

## Princípio
Nenhum módulo de aplicação acessa GPIO, SPI, I2C ou UART diretamente.

## Camada HAL
- Drivers encapsulam periféricos
- APIs públicas expõem apenas funções semânticas

Exemplo incorreto:
gpio_set_level(GPIO_NUM_2, 1);

Exemplo correto:
leds_set(LED_STATUS, true);

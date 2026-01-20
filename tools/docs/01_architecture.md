# Arquitetura do Firmaware


# modelo Arquitetural
o sistema segue uma arquitetura em camadas

1. Hardware Abtraction Layer (Hal)
2. Drivers de periféricos
3. Máquinas de estados(FSM)
4. taks RTOS
5. Camdas de Aplicação (Manager)

# Pincípios 
- Nenhuma task acessa hardware diretamente.
- comunicação entre módulos via eventos e filas
- FSMs não bloqueiam execução
- Drivers são síncronos sempre que possível
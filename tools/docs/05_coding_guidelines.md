# Diretrizes de Codificador

## Regras gerais
- C99
- sem variaveis globais não contraladas
- Funções < 50 linhas
- Nenhuma função bloqueante em FSM


# Nomeação
- Funções: snake_case
- tipos: snake_case_t 
- constantes: UPPER_CASE

# RTOS 
- não usar vtaskDalay em drivers
- Preferir timres e notificações
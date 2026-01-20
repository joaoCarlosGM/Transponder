# Estados Globais do Sistema

# Estados Principais

- SYSTEM_INIT
- SYSTEM_IDLE
- SYSTEM_SYNC
- SYSTEM_OPERATIONAL
- SYSTEM_ERROR
- SYSTEM_LOW_POWER

# Transições 
- INIT → IDLE: Inicialização completa. 
- IDLE → SYNC: GPS válido.
- SYSNC → OPERATIONAL: TDMA sincronizado
- ANY → ERRO: falha crítica
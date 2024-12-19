// Lab 10 - ejercicio 01. Team 9.
// Daniela Ulloa Barboza. B77748.
// Ricardo Hidalgo Campos. B63464.
// Fecha de creación: 6 de noviembre de 2024.

# Register addresses for SPI Peripheral
#define SPCR 0x80001100
#define SPSR 0x80001108
#define SPDR 0x80001110
#define SPER 0x80001118
#define SPCS 0x80001120

# Direcciones de los displays:
#define SegEn_ADDR      0x80001038
#define SegDig_ADDR     0x8000103C

.globl main

main:

    li t1, SegEn_ADDR
    li t4, 0x24
    sb t4, 0(t1)

    # Inicializar SPI
    call spiInit

    # Leer datos de los ejes X, Y, Z y mostrarlos en los displays de 7 segmentos
    jal spiCSDown           # Poner CS en bajo para seleccionar el dispositivo SPI
    # Inicializacion de acelerometro
    li a0, 0x0A
    call spiSendGetData      # Enviar dirección para leer
    li a0, 0x2D
    call spiSendGetData
    li a0, 0x2
    call spiSendGetData
    jal spiCSUp

    li s5, 200000   # retraso

lecturas:
    # Leer los datos de aceleración del eje X
    jal spiCSDown 
    li a0, 0x0B              # Dirección del registro del eje X (por ejemplo)
    call spiSendGetData  
    li a0, 0x08     # Enviar dirección para leer
    call spiSendGetData      # Leer el byte de datos         # Desplazar a la derecha para obtener los 8 bits más significativos
    call spiSendGetData      # Mostrar en display de 7 segmentos para eje X
    jal spiCSUp

    or s1, zero, a1
    li t5, 0
    jal delay

    # Leer los datos de aceleración del eje Y
    jal spiCSDown 
    li a0, 0x0B              # Dirección del registro del eje y (por ejemplo)
    call spiSendGetData  
    li a0, 0x09     # Enviar dirección para leer
    call spiSendGetData      # Leer el byte de datos         # Desplazar a la derecha para obtener los 8 bits más significativos
    call spiSendGetData      # Mostrar en display de 7 segmentos para eje y
    jal spiCSUp
    or s2, zero, a1
    li t5, 0
    jal delay

    # Leer los datos de aceleración del eje Z
    jal spiCSDown 
    li a0, 0x0B              # Dirección del registro del eje z (por ejemplo)
    call spiSendGetData  
    li a0, 0x0A    # Enviar dirección para leer
    call spiSendGetData      # Leer el byte de datos         # Desplazar a la derecha para obtener los 8 bits más significativos
    call spiSendGetData      # Mostrar en display de 7 segmentos para eje z
    jal spiCSUp           # Poner CS en alto para deseleccionar el dispositivo SPI
    or s3, zero, a1
    li t5, 0
    jal delay
    
    # Lectura de los 8 bits mas significativos de X, Y, Z
    andi s1, s1, 0xFF
    andi s2, s2, 0xFF
    andi s3, s3, 0xFF

    # Desplazar las lecturas de X y Y
    slli s1, s1, 24
    slli s2, s2, 12

    # Concatenar las lecturas X, Y, Z
    or s1, s1, s2
    or s1, s1, s3

    # Display de 7 segmentos
    li t1, SegDig_ADDR
    sw s1, 0(t1)
    
    jal delay

    j lecturas                 # Repetir el proceso en bucle

# Subrutinas para controlar SPI y mostrar en los displays

# Subrutina para inicializar el SPI
spiInit:
    li t1, SPCR            # Cargar la dirección del registro de control SPCR
    li t0, 0x53            # Configuración del SPI: habilitar core, modo, divisor de reloj
    sb t0, 0(t1)           # Escribir la configuración en el registro SPCR
    li t1, SPER            # Cargar la dirección del registro SPER
    li t0, 0x02            # Configuración adicional del divisor de reloj
    sb t0, 0(t1)           # Escribir en el registro SPER
ret

# Subrutina para controlar el registro CS
spiCS:
    li t0, SPCS            # Cargar la dirección del registro SPCS
    sb a0, 0(t0)           # Escribir el valor de CS en el registro SPCS
ret

# Subrutina para seleccionar el dispositivo SPI (CS bajo)
spiCSUp:
    li a0, 0x00            # Poner el valor CS en bajo (0x00)
    j spiCS

# Subrutina para deseleccionar el dispositivo SPI (CS alto)
spiCSDown:
    li a0, 0xFF            # Poner el valor CS en alto (0xFF)
    j spiCS

# Subrutina para enviar un byte por SPI y recibir los datos
spiSendGetData:
internalSpiClearIF:
    li t1, SPSR            # Cargar la dirección del registro de estado SPSR
    lb t0, 0(t1)           # Leer el registro de estado SPSR
    ori t0, t0, 0x80       # Limpiar la bandera de interrupción (SPIF)
    sb t0, 0(t1)           # Escribir de vuelta para limpiar la bandera

internalSpiActualSend:
    li t0, SPDR            # Cargar la dirección del registro de datos SPDR
    sb a0, 0(t0)           # Enviar el byte en a0

internalSpiTestIF:
    li t1, SPSR
    lb t0, 0(t1)           # Leer el estado de SPSR nuevamente
    andi t0, t0, 0x80      # Comprobar si la transmisión ha terminado (SPIF)
    li t1, 0x80            # Comparar con 0x80 (SPIF establecido)
    bne t0, t1, internalSpiTestIF  # Esperar hasta que SPIF sea 1

internalSpiReadData:
    li t0, SPDR            # Cargar la dirección del registro de datos SPDR
    lb a1, 0(t0)           # Leer el byte recibido en a1
ret

delay:
    addi t5, t5, 1         # Contador de retraso
    blt t5, s5, delay      # comparador entre contador y retraso
    jr ra

.end

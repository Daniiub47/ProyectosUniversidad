# Proyecto Final. Team 9.
# Daniela Ulloa Barboza. B77748.
# Ricardo Hidalgo Campos. B63464.
# Fecha de creación: 27 de noviembre de 2024.

# Register addresses for SPI Peripheral 
#define SPCR               0x80001100
#define SPSR               0x80001108
#define SPDR               0x80001110
#define SPER               0x80001118
#define SPCS               0x80001120

# Direcciones de los displays:
#define SegEn_ADDR         0x80001038
#define SegDig_ADDR        0x8000103C

# Direcciones de los registros para el audio
#define HRC_AUDIO          0x80001204
#define LRC_AUDIO          0x80001208
#define CTRL_AUDIO         0x8000120C

# LED Rojo LD16
#define HRC_R_16           0x80001244
#define LRC_R_16           0x80001248
#define CTRL_R_16          0x8000124C
# LED Verde LD16
#define HRC_G_16           0x80001284
#define LRC_G_16           0x80001288
#define CTRL_G_16          0x8000128C

# Valores fijos para frecuencia de 440 Hz
#define LRC_VALUE          0x1BBE4   // Valor de LRC para 440 Hz
#define HRC_VALUE          0xDDF2    // Valor de prueba para el HRC (50% del LRC)
#define LRC_VALUE_LED      80
#define HRC_VALUE_LED      40
#define HRC_VALUE_OFF_LED  80        // Se pone igual a LRC para apagarse.
#define CTRL_VALUE         1         // Valor para activar la salida de audio

.globl main

main:

    li t1, SegEn_ADDR
    li t4, 0x24
    sb t4, 0(t1)

    li t0, CTRL_R_16
    li t1, CTRL_VALUE
    sw t1, 0(t0)            # Activar Led rojo

    li t0, CTRL_G_16
    li t1, CTRL_VALUE
    sw t1, 0(t0)            # Activar Led verde

    # Fijar LRC para ambos LEDs:
    li t0, LRC_R_16
    li t1, LRC_VALUE_LED
    sw t1, 0(t0)
    # Led verde
    li t0, LRC_G_16
    li t1, LRC_VALUE_LED
    sw t1, 0(t0)  

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
    andi s1, s1, 0xFF  # X
    andi s2, s2, 0xFF  # Y
    andi s3, s3, 0xFF

    # Cálculo del ángulo usando el eje X e Y
    # Convertir valores del acelerómetro a un ángulo aproximado
    jal calculateAngleX

    # Comprobar si el ángulo excede 20 grados
    li t2, 0x14               # Umbral de 20 grados
    bge s4, t2, overAngle   # Si el ángulo es mayor o igual a 30, activar alarma

    jal calculateAngleY

    # Comprobar si el ángulo excede 20 grados
    li t2, 0x14               # Umbral de 20 grados
    bge s4, t2, overAngle   # Si el ángulo es mayor o igual a 20, activar alarma

    # Desactivar LED y detener sonido si el ángulo es menor o igual a 30 grados
    # Encender LED verde
    li t0, HRC_G_16
    li t1, HRC_VALUE_LED
    sw t1, 0(t0)
    # Se apaga el LED rojo    
    li t0, HRC_R_16
    li t1, HRC_VALUE_OFF_LED
    sw t1, 0(t0) 

    # Apagar el sonido
    li t0, CTRL_AUDIO
    sb zero, 0(t0)          # Apagar el sonido
    j lecturas              # Continuar el bucle

overAngle:
    # Encender Mono Audio Out
    li t0, CTRL_AUDIO
    li t1, CTRL_VALUE
    sw t1, 0(t0)            # Activar salida de audio

    # Activar sonido de emergencia
    li t0, LRC_AUDIO
    li t1, LRC_VALUE
    sw t1, 0(t0)            # Fijar LRC para 440 Hz
    
    li t0, HRC_AUDIO
    li t1, HRC_VALUE
    sw t1, 0(t0)            # Fijar HRC al 50% del LRC

    # Encender LED de emergencia
    li t0, HRC_R_16
    li t1, HRC_VALUE_LED
    sw t1, 0(t0)
    # Se apaga el LED verde    
    li t0, HRC_G_16
    li t1, HRC_VALUE_OFF_LED
    sw t1, 0(t0) 

    j lecturas              # Repetir el proceso en bucle

# Subrutinas para controlar SPI y mostrar en los displays

# Subrutina para calcular el ángulo usando los valores del acelerómetro para X
calculateAngleX:
    # Usar los valores de X e Y para calcular el ángulo aproximado
    # Formula simplificada: atan2(Y, X) aproximado
    # Aquí usamos una aproximación sencilla
    move t0, s2            # Cargar valor de Y
    move t1, s1            # Cargar valor de X
    divu t2, t0, t1        # Aproximación: t2 = Y / X (t2 es el registro de destino)
    move s4, t2            # Guardar el valor del ángulo aproximado en s4
    # Display de 7 segmentos
    li t1, SegDig_ADDR
    sw s4, 0(t1)
ret

# Subrutina para calcular el ángulo usando los valores del acelerómetro para Y
calculateAngleY:
    # Usar los valores de X e Y para calcular el ángulo aproximado
    # Formula simplificada: atan2(Y, X) aproximado
    # Aquí usamos una aproximación sencilla
    move t0, s2            # Cargar valor de Y
    move t1, s1            # Cargar valor de X
    divu t2, t1, t0        # Aproximación: t2 = Y / X (t2 es el registro de destino)
    move s4, t2            # Guardar el valor del ángulo aproximado en s4
    # Display de 7 segmentos
    li t1, SegDig_ADDR
    sw s4, 0(t1)
ret

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

# Subrutina para el retardo
delay:
    addi t5, t5, 1         # Contador de retraso
    blt t5, s5, delay      # comparador entre contador y retraso
    jr ra

.end
# Lab 03 - ejercicio 04. Team 9.
# Daniela Ulloa Barboza. B77748.
# Ricardo Hidalgo Campos. B63464.
# Fecha de creación: 28/08/2024.

.globl main 

main:
  li t0, 0x80001400   # Dirección base del GPIO
  li t1, 0xFFFF

  sw t1, 8(t0)        # GPIO_INOUT = 0xFFFF (Configuración inicial)

repeat:
  lw   t1, 0(t0)      # Leer el estado de los interruptores: t1 = GPIO_SWs
  srli t1, t1, 16     # Desplazar el valor a la derecha 16 bits
  
  li t2, 0xF000       # Máscara para los bits más significativos
  li t3, 0x000F       # Máscara para los bits menos significativos
  and t2, t1, t2      # t2 = 0xs000
  and t3, t1, t3      # t3 = 0x000s
  srli t2, t2, 12     # Se desplaza t2 entonces ahora también se tiene t2 = 0x000s
  add t1, t2, t3      # Se hace la suma completa.


  sw   t1, 4(t0)      # Escribir el resultado en los LEDs: GPIO_LEDs = t1
  j    repeat         # Repetir el bucle

.end


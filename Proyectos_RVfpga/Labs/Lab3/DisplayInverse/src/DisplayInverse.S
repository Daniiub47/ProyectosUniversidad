# Lab 03 - ejercicio 02. Team 9.
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
  li   t2, 0xFFFF
  xor  t1, t1, t2     # Invertir los bits de t1
  sw   t1, 4(t0)      # Escribir el valor invertido a los LEDs: GPIO_LEDs = t1
  j    repeat         # Repetir el bucle

.end

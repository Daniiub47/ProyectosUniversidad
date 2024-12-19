// Lab 06 - ejercicio 03 y Prereporte 2. Team 9.
// Daniela Ulloa Barboza. B77748.
// Ricardo Hidalgo Campos. B63464.

#define GPIO2_Bs    0x80001800
#define GPIO_LEDs   0x80001404
#define GPIO_INOUT  0x80001408

.globl main
main:

li x28, 0xFFFF
li x29, GPIO_INOUT
sw x28, 0(x29)                  # Write the Enable Register

next:
    li  a1, GPIO2_Bs            # Read the Switches
    lw  t0, 0(a1)

    li  a0, GPIO_LEDs
    sw  t0, 0(a0)               # Write the LEDs

    beq zero, zero, next
.end

# Lab 04 - ejercicio 07. Team 9.
# Daniela Ulloa Barboza. B77748.
# Ricardo Hidalgo Campos. B63464.
# Fecha de creación: 04/09/2024.

.section .data
    .equ N, 4
    .align 2
    A:  .word 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1  # Un ejemplo de lista de 3*N valores
    B:  .space 4 * N  # Reservar espacio para N elementos en B

.section .text
    .globl main

main:
    li t0, 0          # i = 0
    li t1, 0          # j = 0
    la t2, A          # t2 apunta al inicio de A
    la t3, B          # t3 apunta al inicio de B (donde almacenar los resultados)
    add a4, zero, N

loop:
    beq t0, a4, end    # Si i == N, salir del bucle

    # Llamar a res_triplet(A, j)
    add t4, t2, t1    # t4 = dirección de A[j]
    jal res_triplet

    # Calcular la dirección correcta en B[i] usando t0
    slli t5, t0, 2    # t5 = i * 4 (cada elemento en B es de 4 bytes)
    add t5, t3, t5    # t5 = &B[i], dirección donde se guardará el resultado

    # Guardar el resultado en B[i]
    sw a0, 0(t5)      # B[i] = resultado (a0)
    
    # Mover al siguiente elemento de B y A
    addi t1, t1, 12   # j = j + 3*4 (3 elementos de 4 bytes cada uno)
    addi t0, t0, 1    # i = i + 1

    j loop

end:
    li a7, 10         # Código de salida de ecall
    ecall

# Función res_triplet: calcula el valor absoluto de la suma de tres elementos consecutivos
res_triplet:
    lw t5, 0(t4)      # t5 = A[j]
    lw t6, 4(t4)      # t6 = A[j + 1]
    lw t4, 8(t4)      # t4 = A[j + 2]

    add t5, t5, t6    # t5 = A[j] + A[j + 1]
    add t5, t5, t4    # t5 = A[j] + A[j + 1] + A[j + 2]

    # Obtener el valor absoluto
    bgez t5, positive  # Si t5 >= 0, saltar a positive
    neg t5, t5        # Si es negativo, t5 = -t5
positive:
    addi a0, t5, 0    # Guardar el resultado en a0
    jr ra             # Volver a main


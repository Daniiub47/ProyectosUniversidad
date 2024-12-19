# Lab 04 - ejercicio 08. Team 9.
# Daniela Ulloa Barboza. B77748.
# Ricardo Hidalgo Campos. B63464.
# Fecha de creación: 04/09/2024.

.globl main

.equ N, 6 # Es un define para mayor facilidad.

.data # Se declara el vector con sus elementos.
A: .word 48,64,56,80,96,48

.bss # Se declara el tamaño de un array y se rellena con ceros.
B: .space 4*N 

.text # El código comienza a partir del .text:

main:
    li t0, 0          # i = 0.
    li t1, 0          # j = 0.
    la t2, A          # t2 apunta al inicio de A
    la t3, B          # t3 apunta al inicio de B (donde almacenar los resultados)
    add a3, zero, N   # Se ingresa N en a3.
    addi a3, a3, -1   # Se le resta 1 a N para tener N-1.

loop:
    beq t0, a3, end   # Si i == N-1, salir del bucle.

    # Se obtiene la dirección de A[i].
    slli t4, t0, 2    # t4 = i * 4 (cada elemento es de 4 bytes, se usa el i del for.)
    add a1, t2, t4    # a1 = dirección de A[i].
    lw a1, 0(a1)      # Ahora a1 = A[i] (el elemento).
    # Se obtiene la dirección de A[i+1].
    addi t4, t4, 4    # Ahora t4 = i + 1.
    add a2, t2, t4    # a2 = dirección de A[i+1].
    lw a2, 0(a2)      # Ahora a2 = A[i+1] (el siguiente elemento).

    # Se llama a la función my_Filter, el resultado está en a0, los parámetros en a1 y a2.
    jal my_Filter
    
    # Se evalúa si el retorno es 1 o 0, si no es 1, brinca a no_if.
    beq a0, zero, no_if

# Sección donde se cumple el if:
    # Se obtiene la dirección de B[j].
    add a4, t3, t1    # a4 = dirección de B[j] donde irá el resultado.
    add t5, a1, a2    # t5 = A[i] + A[i+1].
    addi t5, t5, 2    # A la suma se le suma además 2.
    # Guardar el resultado en B[j]
    sw t5, 0(a4)      # B[j] = resultado (t5), se guarda en a4.
    # Se aumenta el contador de j para ir accediendo a los espacios de B.
    addi t1, t1, 4    # j = j + 1. (Se suma 4 porque son elementos de 4 bytes)

no_if:
    # Se aumenta el contador i.
    addi t0, t0, 1    # i = i + 1. Se aumenta el i del for.

    j loop            # Vuelvo a comenzar el loop.

end:
    li a7, 10         # Código de salida de ecall.
    ecall

my_Filter:
    li t4, 0xF        # Se hace una máscara (1111) para saber si es múltiplo de 16.

    and t4, a1, t4    # Se hace una and con la máscara y A[i], y se guarda en t4.
    bne t4, zero, no_multiplo16_2do_menor # Si el resultado no es cero, no es múltiplo de 16.

# Caso en el que el primero sí es múltiplo de 16:
    blt a2, a1, no_multiplo16_2do_menor # Si A[i+1] < A[i]

    # A[i+1] > A[i]:
    li a0, 1 # Retorna 1 ya que el primer es múltiplo de 16 y el segundo es mayor que el primero.
    jr ra             # Volver a main.

no_multiplo16_2do_menor:
    li a0, 0 # Retorna 0 si el primer valor no es múltiplo de 16 o si el segundo es menor que el primero.
    jr ra             # Volver a main.


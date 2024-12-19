// Lab 06 - ejercicio 05. Team 9.
// Daniela Ulloa Barboza. B77748.
// Ricardo Hidalgo Campos. B63464.

#define LED_ADDR    (*(volatile unsigned int*)0x80001404)  // Dirección de los LEDs
#define BTN_ADDR   (*(volatile unsigned int*)0x80001800)  // Dirección del botón BTNC

#define DELAY_FAST  500000
#define DELAY_SLOW  2000000

void delay(unsigned int count) {
    for (volatile unsigned int i = 0; i < count; i++);
}

int main() {
    unsigned int counter = 1;
    unsigned int delay_time = DELAY_FAST;

    while (1) {
        // Mostrar el contador en los LEDs
        LED_ADDR = counter;

        // Leer BTNC y cambiar la velocidad
        if (BTN_ADDR & 0x1) {
            delay_time = DELAY_SLOW;  // Cambiar a retardo lento
        }
        // Leer BTNU y reiniciar el contador
        else if (BTN_ADDR & 0x2) {
            counter = 1;  // Reiniciar contador
        }


        // Bucle de retardo
        delay(delay_time);

        // Incrementar contador
        counter++;
    }

    return 0;
}

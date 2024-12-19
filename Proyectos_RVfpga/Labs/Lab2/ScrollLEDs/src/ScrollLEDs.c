// Lab 02 - ejercicio 03. Team 9.
// Daniela Ulloa Barboza. B77748.
// Ricardo Hidalgo Campos. B63464.
// Fecha de creación: 21/08/2024.

// memory-mapped I/O addresses
#define GPIO_SWs    0x80001400
#define GPIO_LEDs   0x80001404
#define GPIO_INOUT  0x80001408

#define READ_GPIO(dir) (*(volatile unsigned *)dir)
#define WRITE_GPIO(dir, value) { (*(volatile unsigned *)dir) = (value); }

void delay(int time) {
    volatile int i;
    for (i = 0; i < time; i++);
}

int main(void) {
    int En_Value = 0xFFFF;
    int led_value = 0x00;  // Estado inicial de los leds (off)
    int delay_time = 1000000;

    WRITE_GPIO(GPIO_INOUT, En_Value);  // Se inicializa GPIO

    while (1) {
        for (int num_leds = 1; num_leds <= 16; num_leds++) {
            // Desplazamiento de los LEDs de derecha a izquierda.
            for (int pos = 0; pos <= (16 - num_leds); pos++) {
                led_value = ((1 << num_leds) - 1) << pos;
                WRITE_GPIO(GPIO_LEDs, led_value);
                delay(delay_time);
            }
            // Desplazamiento de los LEDs de izquierda a derecha.
            for (int pos = (16 - num_leds); pos >= 0; pos--) {
                led_value = ((1 << num_leds) - 1) << pos;
                WRITE_GPIO(GPIO_LEDs, led_value);
                delay(delay_time);
            }
        }
    }
    return 0;
}


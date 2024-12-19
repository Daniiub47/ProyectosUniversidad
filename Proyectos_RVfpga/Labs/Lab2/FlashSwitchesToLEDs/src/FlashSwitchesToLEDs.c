// Lab 02 - ejercicio 01. Team 9.
// Daniela Ulloa Barboza. B77748.
// Ricardo Hidalgo Campos. B63464.
// Fecha de creación: 21/08/2024.

// memory-mapped I/O addresses
#define GPIO_SWs    0x80001400
#define GPIO_LEDs   0x80001404
#define GPIO_INOUT  0x80001408

#define READ_GPIO(dir) (*(volatile unsigned *)dir)
#define WRITE_GPIO(dir, value) { (*(volatile unsigned *)dir) = (value); }

// Función para crear un delay.
void delay(volatile int count) {
    while (count--) {
        // Loop vacío para delay
    }
}

int main(void) {
    int En_Value = 0xFFFF;
    int led_value = 0x00;  // Estado inicial de los leds (off)
    int switches_value;    // Valor de los switches
    int delay_time = 1000000;

    WRITE_GPIO(GPIO_INOUT, En_Value);  // Se inicializa GPIO

    while (1) {
        switches_value = READ_GPIO(GPIO_SWs);   // Se lee el valor de los switches
        switches_value = switches_value >> 16;  // desplazamiento si se necesitara.

        // Se itera a través de cada switch y su correspondiente LED.
        for (int i = 0; i < 16; i++) {
            int switch_mask = 1 << i;  // Se crea una máscara para el actual switch.
            int led_mask = 1 << i;      // Se crea la máscara para el LED correspondiente.

            // Se chequea si el switch está encendido.
            if (switches_value & switch_mask) {
                // Parpadeo del LED si el switch está encendido.
                led_value ^= led_mask;  // Parpadeo del LED
            } else {
                // LED se apaga si el switch está apagado.
                led_value &= ~led_mask;  // Se despeja el bit correspondiente del LED.
            }
        }
        // Se almacena el estado del LED en el hardware.
        WRITE_GPIO(GPIO_LEDs, led_value);
        // Control del delay.
        delay(delay_time);
    }
    return 0;
}


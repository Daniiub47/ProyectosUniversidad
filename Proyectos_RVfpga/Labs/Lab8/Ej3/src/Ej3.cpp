// Lab 08 - ejercicio 03. Team 9.
// Daniela Ulloa Barboza. B77748.
// Ricardo Hidalgo Campos. B63464.

// Direcciones de los registros
#define switches 0x80001400

// LED Rojo
#define HRC_R 0x80001244
#define LRC_R 0x80001248
#define CTRL_R 0x8000124C

// LED Verde
#define HRC_G 0x80001284
#define LRC_G 0x80001288
#define CTRL_G 0x8000128C

// LED Azul
#define HRC_B 0x800012C4
#define LRC_B 0x800012C8
#define CTRL_B 0x800012CC

// Macros para leer y escribir
#define READ(dir) (*(volatile unsigned *)dir)
#define WRITE(dir, value) { (*(volatile unsigned *)dir) = (value); }

// Valores fijos
#define LRC_VALUE 80
#define MAX_SWITCH_VALUE 31 // Máximo valor de los 5 interruptores (todos en 1)

// Función para calcular HRC basado en los interruptores
int calculate_hrc(int switch_value) {
    // La fórmula ajusta HRC entre LRC y LRC/2 basado en la proporción de switches encendidos
    return (LRC_VALUE / 2) + (switch_value * (LRC_VALUE / 2) / MAX_SWITCH_VALUE);
}

int main(void) {
    int switch_state;
    int red_switch_value, green_switch_value, blue_switch_value;
    int hrc_red, hrc_green, hrc_blue;
    int ctrl_value = 1;

    while (1) {
        switch_state = READ(switches);
        switch_state = ~(switch_state >> 16);

        // Extraer los 5 bits correspondientes a cada LED
        blue_switch_value = switch_state & 0x1F;           // Los 5 bits más a la derecha
        green_switch_value = (switch_state >> 5) & 0x1F;   // Los siguientes 5 bits
        red_switch_value = (switch_state >> 10) & 0x1F;    // Los siguientes 5 bits

        // Calcular el valor de HRC para cada color
        hrc_red = calculate_hrc(red_switch_value);
        hrc_green = calculate_hrc(green_switch_value);
        hrc_blue = calculate_hrc(blue_switch_value);

        // Configurar los valores de PWM para cada LED
        // LED Rojo:
        WRITE(HRC_R, hrc_red);
        WRITE(LRC_R, LRC_VALUE);
        WRITE(CTRL_R, ctrl_value);

        // LED Verde:
        WRITE(HRC_G, hrc_green);
        WRITE(LRC_G, LRC_VALUE);
        WRITE(CTRL_G, ctrl_value);

        // LED Azul:
        WRITE(HRC_B, hrc_blue);
        WRITE(LRC_B, LRC_VALUE);
        WRITE(CTRL_B, ctrl_value);
    }

    return 0;
}

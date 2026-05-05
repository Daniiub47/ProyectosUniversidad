//======================================================
// Universidad de Costa Rica.
// Escuela de Ingeniería Eléctrica.
// Curso: Estructuras Abstractas de Datos y Algoritmos.
// Profesor: Ing. José Freddy Rojas Chavarría, MSc.
// Estudiantes: Daniela Ulloa Barboza. B77748.
//              Luis Diego Núñez Mora. B75473.
// Proyecto: Semáforos en FPGA Nexys A7 utilizando
//           interrupciones y máquinas de estados.
//======================================================

// Descripción:

// Librerías necesarias para las interrupciones (es normal que no se reconozcan)
#include "psp_api.h"
#include "bsp_external_interrupts.h"
#include "psp_ext_interrupts_eh1.h"
#include "bsp_timer.h"
#include "bsp_printf.h"

// Registros para los displays de 7 segmentos
#define SegEn_ADDR      0x80001038
#define SegDig_ADDR     0x8000103C

// Registros de los botones y sus interrupciones
#define GPIO2_PBs       0x80001800
#define GPIO2_INOUT     0x80001808
#define RGPIO2_INTE     0x8000180C
#define RGPIO2_PTRIG    0x80001810
#define RGPIO2_CTRL     0x80001818
#define RGPIO2_INTS     0x8000181C

// LED Rojo LD16
#define HRC_R_16        0x80001244
#define LRC_R_16        0x80001248
#define CTRL_R_16       0x8000124C
// LED Verde LD16
#define HRC_G_16        0x80001284
#define LRC_G_16        0x80001288
#define CTRL_G_16       0x8000128C
// LED Azul LD16
#define HRC_B_16        0x800012C4
#define LRC_B_16        0x800012C8
#define CTRL_B_16       0x800012CC

// Se agregan los registros de las PTCS para poder controlar el LED Tricolor LD17:
// LED Rojo LD17
#define HRC_R_17        0x80001344
#define LRC_R_17        0x80001348
#define CTRL_R_17       0x8000134C
// LED Verde LD17
#define HRC_G_17        0x80001384
#define LRC_G_17        0x80001388
#define CTRL_G_17       0x8000138C
// LED Azul LD17
#define HRC_B_17        0x800013C4
#define LRC_B_17        0x800013C8
#define CTRL_B_17       0x800013CC

#define Select_INT      0x80001018

// Valores fijos
#define LRC_VALUE       80
#define HRC_VALUE       40
#define HRC_VALUE_OFF   80
#define CTRL_VALUE      1

// Estados del semáforo, para una ordenada implementacion de los estados del
// semaforo se utiliza un enum
typedef enum {
    STATE_RED,
    STATE_GREEN,
    STATE_YELLOW
} traffic_light_state_t;

// Variables globales:
traffic_light_state_t currentState = STATE_RED; // Estado inicial
int contador7Seg;
int i = 0;

extern D_PSP_DATA_SECTION D_PSP_ALIGNED(1024) pspInterruptHandler_t G_Ext_Interrupt_Handlers[8];

// Decodificador para los números del display de 7 segmentos
void SetDisplay(int num) {
    M_PSP_WRITE_REGISTER_32(SegDig_ADDR, num); // Mostrar el número en los displays
}

// Función para realizar el desconteo en el display de 7 segmentos
void DesconteoDisplay(void) {
    for (contador7Seg = 9; contador7Seg >= 0; contador7Seg--) {
        SetDisplay(contador7Seg); // Actualiza el valor del display
        for (i = 0; i < 10000000; i++); // Delay para hacer visible el conteo
    }
}

void GPIO_ISR(void)
{ // Esta es la función de la interrupción aquí se ubica el código
  // que se ejecutará durante la interrupción.
  if(M_PSP_READ_REGISTER_32(RGPIO2_INTS) & 0x1) {
    // Si se recibe la interrupción del botón central:
    M_PSP_WRITE_REGISTER_32(HRC_G_17, HRC_VALUE); // Activa Paso del tren.
    M_PSP_WRITE_REGISTER_32(HRC_R_17, HRC_VALUE_OFF); // Apaga led rojo.
    M_PSP_WRITE_REGISTER_32(HRC_R_16, HRC_VALUE);
    M_PSP_WRITE_REGISTER_32(HRC_G_16, HRC_VALUE_OFF);
    M_PSP_WRITE_REGISTER_32(HRC_B_16, HRC_VALUE_OFF);
    for(i=0;i<50000000;i++);
    M_PSP_WRITE_REGISTER_32(HRC_G_17, HRC_VALUE_OFF);
    M_PSP_WRITE_REGISTER_32(HRC_R_17, HRC_VALUE);
    // Tengo duda con esto, si se acciona el boton a cual estado deberia ir..
    currentState = STATE_RED; // Reinicia el semáforo al estado verde
  }
  // Se reinicia la interrupción para poder detectar nuevamente.
  M_PSP_WRITE_REGISTER_32(RGPIO2_INTS, 0x0);
  // Se concreta la interrupción.
  bspClearExtInterrupt(4);
}


void DefaultInitialization(void)
{ // Función ya suministrada para manejar interrupciones (No editar).
  u32_t uiSourceId;

  /* Register interrupt vector */
  pspInterruptsSetVectorTableAddress(&M_PSP_VECT_TABLE);

  /* Set external-interrupts vector-table address in MEIVT CSR */
  pspExternalInterruptSetVectorTableAddress(G_Ext_Interrupt_Handlers);

  /* Put the Generation-Register in its initial state (no external interrupts are generated) */
  bspInitializeGenerationRegister(D_PSP_EXT_INT_ACTIVE_HIGH);

  for (uiSourceId = D_BSP_FIRST_IRQ_NUM; uiSourceId <= D_BSP_LAST_IRQ_NUM; uiSourceId++)
  {
    /* Make sure the external-interrupt triggers are cleared */
    bspClearExtInterrupt(uiSourceId);
  }

  /* Set Standard priority order */
  pspExtInterruptSetPriorityOrder(D_PSP_EXT_INT_STANDARD_PRIORITY);

  /* Set interrupts threshold to minimal (== all interrupts should be served) */
  pspExtInterruptsSetThreshold(M_PSP_EXT_INT_THRESHOLD_UNMASK_ALL_VALUE);

  /* Set the nesting priority threshold to minimal (== all interrupts should be served) */
  pspExtInterruptsSetNestingPriorityThreshold(M_PSP_EXT_INT_THRESHOLD_UNMASK_ALL_VALUE);
}


void ExternalIntLine_Initialization(u32_t uiSourceId, u32_t priority, pspInterruptHandler_t pTestIsr)
{ // Función ya suministrada para manejar interrupciones (No editar).
  /* Set Gateway Interrupt type (Level) */
  pspExtInterruptSetType(uiSourceId, D_PSP_EXT_INT_LEVEL_TRIG_TYPE);

  /* Set gateway Polarity (Active high) */
  pspExtInterruptSetPolarity(uiSourceId, D_PSP_EXT_INT_ACTIVE_HIGH);

  /* Clear the gateway */
  pspExtInterruptClearPendingInt(uiSourceId);

  /* Set IRQ4 priority */
  pspExtInterruptSetPriority(uiSourceId, priority);

  /* Enable IRQ4 interrupts in the PIC */
  pspExternalInterruptEnableNumber(uiSourceId);

  /* Register ISR */
  G_Ext_Interrupt_Handlers[uiSourceId] = pTestIsr;
}


void GPIO_Initialization(void)
{ // Aquí se setean los registros de interrupción de la GPIO2 de los botones.
  /* Configure GPIO2 interrupts */
  M_PSP_WRITE_REGISTER_32(RGPIO2_INTE, 0x1F);          /* RGPIO_INTE */
  M_PSP_WRITE_REGISTER_32(RGPIO2_PTRIG, 0x1F);         /* RGPIO_PTRIG */
  M_PSP_WRITE_REGISTER_32(RGPIO2_INTS, 0x0);           /* RGPIO_INTS */
  M_PSP_WRITE_REGISTER_32(RGPIO2_CTRL, 0x1);           /* RGPIO_CTRL */
}

// Funcion para actualizar los estados del semaforo
void TrafficLight(void) {
    switch (currentState) {
        case STATE_RED:
            // Estado rojo: enciende el LED rojo y apaga los demás
            M_PSP_WRITE_REGISTER_32(HRC_R_16, HRC_VALUE);   // Activa LED rojo
            M_PSP_WRITE_REGISTER_32(HRC_G_16, HRC_VALUE_OFF); // Apaga LED verde
            M_PSP_WRITE_REGISTER_32(HRC_B_16, HRC_VALUE_OFF); // Apaga LED azul
            DesconteoDisplay(); // Llamada al desconteo en cada estado
            break;

        case STATE_GREEN:
            // Estado verde: enciende el LED verde y apaga los demás
            M_PSP_WRITE_REGISTER_32(HRC_G_16, HRC_VALUE);   // Activa LED verde
            M_PSP_WRITE_REGISTER_32(HRC_R_16, HRC_VALUE_OFF); // Apaga LED rojo
            M_PSP_WRITE_REGISTER_32(HRC_B_16, HRC_VALUE_OFF); // Apaga LED azul
            DesconteoDisplay(); // Llamada al desconteo en cada estado
            break;

        case STATE_YELLOW:
            // Estado amarillo: enciende el LED amarillo (verde + rojo) y apaga el azul
            M_PSP_WRITE_REGISTER_32(HRC_R_16, HRC_VALUE); // Activa LED rojo
            M_PSP_WRITE_REGISTER_32(HRC_G_16, HRC_VALUE); // Activa LED verde
            M_PSP_WRITE_REGISTER_32(HRC_B_16, HRC_VALUE_OFF); // Apaga LED azul
            DesconteoDisplay(); // Llamada al desconteo en cada estado
            break;
    }
}

// Función que actualiza el estado del semáforo
void UpdateState(void) {
    switch (currentState) {
        case STATE_RED:
            // Transición del estado rojo al verde
            currentState = STATE_GREEN;
            break;

        case STATE_GREEN:
            // Transición del estado verde al amarillo
            currentState = STATE_YELLOW;
            break;

        case STATE_YELLOW:
            // Transición del estado amarillo al rojo
            currentState = STATE_RED;
            break;
    }
}


int main(void)
{
  // Bloque necesario de llamado de funciones para activar interrupción.
  /* INITIALIZE THE INTERRUPT SYSTEM */
  DefaultInitialization();                            /* Default initialization */
  pspExtInterruptsSetThreshold(5);                    /* Set interrupts threshold to 5 */

  /* INITIALIZE INTERRUPT LINE IRQ4 */
  ExternalIntLine_Initialization(4, 6, GPIO_ISR);     /* Initialize line IRQ4 with a priority of 6. Set GPIO_ISR as the Interrupt Service Routine */
  M_PSP_WRITE_REGISTER_32(Select_INT, 0x3);           /* Connect the GPIO interrupt to the IRQ4 interrupt line */

  /* INITIALIZE THE PERIPHERALS */
  GPIO_Initialization();                              /* Initialize the GPIO */
  M_PSP_WRITE_REGISTER_32(SegEn_ADDR, 0x0);           /* Initialize the 7-Seg Displays */

  /* ENABLE INTERRUPTS */
  pspInterruptsEnable();                              /* Enable all interrupts in mstatus CSR */
  M_PSP_SET_CSR(D_PSP_MIE_NUM, D_PSP_MIE_MEIE_MASK);  /* Enable external interrupts in mie CSR */
  // Fin del bloque de llamado de funciones para activar interrupción.

  // Se habilita el controlador de las PTCs de los LEDs Tricolor:
  M_PSP_WRITE_REGISTER_32(CTRL_R_16, CTRL_VALUE);
  M_PSP_WRITE_REGISTER_32(CTRL_G_16, CTRL_VALUE);
  M_PSP_WRITE_REGISTER_32(CTRL_B_16, CTRL_VALUE);
  M_PSP_WRITE_REGISTER_32(CTRL_R_17, CTRL_VALUE);
  M_PSP_WRITE_REGISTER_32(CTRL_G_17, CTRL_VALUE);
  // Se setean los registros LRC de todos los LEDS Tricolor:
  M_PSP_WRITE_REGISTER_32(LRC_R_16, LRC_VALUE);
  M_PSP_WRITE_REGISTER_32(LRC_G_16, LRC_VALUE);
  M_PSP_WRITE_REGISTER_32(LRC_B_16, LRC_VALUE);
  M_PSP_WRITE_REGISTER_32(LRC_R_17, LRC_VALUE);
  M_PSP_WRITE_REGISTER_32(LRC_G_17, LRC_VALUE);
  // Estado inicial de los LEDs Tricolor:
  M_PSP_WRITE_REGISTER_32(HRC_R_16, HRC_VALUE_OFF);
  M_PSP_WRITE_REGISTER_32(HRC_G_16, HRC_VALUE_OFF);
  M_PSP_WRITE_REGISTER_32(HRC_B_16, HRC_VALUE_OFF);
  M_PSP_WRITE_REGISTER_32(HRC_R_17, HRC_VALUE);
  M_PSP_WRITE_REGISTER_32(HRC_G_17, HRC_VALUE_OFF);

  while (1) { // Programa que se ejecuta una y otra vez hasta recibir interrupción.
    // Ejecución del estado
    TrafficLight();
    // Actualiza el semaforo con el estado actual
    UpdateState();
  }
}

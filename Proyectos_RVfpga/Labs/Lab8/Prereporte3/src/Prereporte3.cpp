// Lab 08 - ejercicio 01 y Prereporte 3. Team 9.
// Daniela Ulloa Barboza. B77748.
// Ricardo Hidalgo Campos. B63464.

#define SegEn_ADDR    0x80001038
#define SegDig_ADDR   0x8000103C

#define RPTC_CNTR     0x00001200
#define RPTC_HRC      0x80001204
#define RPTC_LRC      0x80001208
#define RPTC_CTRL     0x8000120C
#define EN_BIT        0
#define INTE_BIT      5
#define INT_BIT       6
#define CNTRRST_BIT   7
#define SIM_HRC_LRC   0x2FAF080

#define READ_REG(dir) (*(volatile unsigned *)dir)
#define WRITE_REG(dir, value) { (*(volatile unsigned *)dir) = (value); }

int main (void)
{
    unsigned int seconds = 0;
    WRITE_REG(SegDig_ADDR, seconds);

    // Valores para simulación:
    //WRITE_REG(RPTC_LRC, 0x80);
    //WRITE_REG(RPTC_HRC, 0x80);

    // Valores para correr en la Nexys:
    WRITE_REG(RPTC_LRC, SIM_HRC_LRC);
    WRITE_REG(RPTC_HRC, SIM_HRC_LRC);

    WRITE_REG(RPTC_CTRL, (1<<INTE_BIT)|(1<<EN_BIT));

    while(1)
    {
        if(READ_REG(RPTC_CTRL) & (1<<INT_BIT)) {
            seconds++;
            WRITE_REG(SegDig_ADDR, seconds);

            WRITE_REG(RPTC_CTRL, (1<<INT_BIT));
            WRITE_REG(RPTC_CTRL, (1<<INTE_BIT)|(1<<EN_BIT));
        }
    }
    return(0);
}


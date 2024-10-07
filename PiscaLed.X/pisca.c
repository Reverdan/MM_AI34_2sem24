#include "definicoes.h"

void configuracao()
{
    TRISB0 = 0;
    PORTBbits.RB0 = 0;
}

void main(void) 
{
    configuracao();
    
    for(;;)
    {
        acendeLed;
        tempo;
        apagaLed;
        tempo;
    }
}

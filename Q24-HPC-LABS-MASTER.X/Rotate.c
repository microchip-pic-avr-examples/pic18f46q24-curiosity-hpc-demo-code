#include "mcc_generated_files/system/system.h"
#include "labs.h"

/**
  Section: Local Variable Declarations
 */
static uint8_t rotateReg;

/*
                             Application    
 */
void Rotate(void) {

    if (labState == NOT_RUNNING) {
        LEDs_SetLow();
        LED_D2_SetHigh();
        
        //Initialize temporary register to begin at 1
        rotateReg = 1;
        
        labState = RUNNING;
    }

    if (labState == RUNNING) {
        __delay_ms(500);

        rotateReg <<= 1;

        //If the last LED has been lit, restart the pattern
        if (rotateReg == LAST)
            rotateReg = 1;

        //Determine which LED will light up
        //ie. which bit in the register the 1 has rotated to.
        LEDs = (rotateReg << 4);
    }

    if (switchEvent) {
        labState = NOT_RUNNING;
    }
}

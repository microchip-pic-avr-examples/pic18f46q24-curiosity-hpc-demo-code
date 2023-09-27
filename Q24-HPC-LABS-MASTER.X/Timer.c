#include "mcc_generated_files/system/system.h"
#include "labs.h"

/**
  Section: Local Variable Declarations
 */
static uint8_t rotateReg;

/*
                             Application    
 */
void Timers(void) {

    if (labState == NOT_RUNNING) {
        LEDs_SetLow();
        LED_D2_SetHigh();

        //Initialize temporary register to begin at 1
        rotateReg = 1;

        TMR1_Start();

        labState = RUNNING;
    }

    if (labState == RUNNING) {
        while(!TMR1_HasOverflowOccured());       
        TMR1IF = 0;                
        TMR1_Reload();

        rotateReg <<= 1;

        //Return to initial position of LED
        if (rotateReg == LAST) {
            rotateReg = 1;
        }

        //Determine which LED will light up
        LEDs = (rotateReg << 4);
    }

    if (switchEvent) {
        TMR1_Stop();

        labState = NOT_RUNNING;
    }
}
/**
 End of File
 */

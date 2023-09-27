#include "mcc_generated_files/system/system.h"
#include "labs.h"

/*
                             Application    
 */

void HelloWorld(void) {
    if (labState == NOT_RUNNING) {
        LEDs_SetLow();

        labState = RUNNING;
    }

    if (labState == RUNNING) {
        LED_D2_SetHigh();
    }

    if (switchEvent) {
        labState = NOT_RUNNING;
    }
}
/**
 End of File
 */

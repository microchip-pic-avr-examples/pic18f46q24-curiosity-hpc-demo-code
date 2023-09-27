#include "mcc_generated_files/system/system.h"
#include "labs.h"

/**
  Section: Macro Declaration
 */
#define FLAG_COUNTER_MAX 3  // Maximum flag count to create 1.5 seconds delay

/**
  Section: Variable Declaration
 */
static uint8_t flagCounter = 0;

/*
                             Application    
 */
void Blink(void) {
    if (labState  == NOT_RUNNING) {
        LEDs_SetLow();
        TMR1_Start();

        labState = RUNNING;
    }

    if (labState == RUNNING) {
        while(!TMR1_HasOverflowOccured());   
        TMR1IF = 0;  
        TMR1_Reload();    
        flagCounter++;

        if(flagCounter == FLAG_COUNTER_MAX){       
            LED_D2_Toggle();    
            flagCounter = 0;
        }  
    }

    if (switchEvent) {
        TMR1_Stop();
        labState = NOT_RUNNING;
    }
}

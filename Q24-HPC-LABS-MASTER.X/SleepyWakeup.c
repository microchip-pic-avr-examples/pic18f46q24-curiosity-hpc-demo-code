#include "mcc_generated_files/system/system.h"
#include "labs.h"

/**
  Section: Macro Declaration
 */
#define WDT_Enable()        (WDTCON0bits.SWDTEN = 1)
#define WDT_Disable()       (WDTCON0bits.SWDTEN = 0)

/*
                             Application    
 */
void SleepWakeUp(void) {

    if (labState == NOT_RUNNING) {
        LED_D2_LAT = LED_D4_LAT = HIGH;
        LED_D3_LAT = LED_D5_LAT = LOW;

        WDT_Enable();

        SLEEP();

        labState = RUNNING;
    }

    if (labState == RUNNING) {
        //Wait 4 seconds for the WDT time out
        //and reverse the states of the LEDs
        LED_D2_LAT = LED_D4_LAT = LOW;
        LED_D3_LAT = LED_D5_LAT = HIGH;

        WDT_Disable();
        
        
        
    }

    if (switchEvent) {
        labState = NOT_RUNNING;
    }
}


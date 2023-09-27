#include "mcc_generated_files/system/system.h"
#include "labs.h"

/**
  Section: Local Variable Declarations
 */
static uint8_t delay;
static uint8_t rotateReg;

/*
                             Application    
 */
void VSR(void) {

    if (labState == NOT_RUNNING) {
        LEDs_SetLow();

        //Initialize temporary register to begin at 1
        rotateReg = 1;

        labState = RUNNING;
    }

    if (labState == RUNNING) {
        // Use the top 8 MSbs of the ADC result as delay
        delay = ADCC_GetSingleConversion(POT) >> 8;
        //Printing ADC result on Serial port
        printf("ADC Result: %d\n\r", ADRES >> 4);
        __delay_ms(2);

        // Decrement the 8 MSbs of the ADC and delay each for 2ms
        while (delay-- != 0) {
            __delay_ms(2);
        }

        //Determine which LED will light up
        LEDs = (rotateReg << 4);

        rotateReg <<= 1;

        //Return to initial position of LED
        if (rotateReg == LAST) {
            rotateReg = 1;
        }
    }

    if (switchEvent) {
        labState = NOT_RUNNING;
    }
}

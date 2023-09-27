#include "mcc_generated_files/system/system.h"
#include "labs.h"

/**
  Section: Local Variable Declaration
 */
static uint8_t adcResult; // Used to store the result of the ADC

/*
                             Application    
 */
void ADC_LAB(void) {

    if (labState == NOT_RUNNING) {
        LEDs_SetLow();

        labState = RUNNING;
    }

    if (labState == RUNNING) {
        //Get the top 4 MSBs and display it on the LEDs
        adcResult = ADCC_GetSingleConversion(POT) >> 12;

        //Printing ADC result on Serial port
        printf("ADC Result: %d\n\r", ADRES >> 4);

        //Determine which LEDs will light up
        LEDs = (adcResult << 4);
    }

    if (switchEvent) {
        labState = NOT_RUNNING;
    }
}

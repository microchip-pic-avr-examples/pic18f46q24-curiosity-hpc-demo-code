#include "mcc_generated_files/system/system.h"
#include "labs.h"

/**
  Section: Macro Declaration
 */
#define EEAddr    0x380000U      // EEPROM starting address

/**
  Section: Local Variable Declarations
 */
static uint8_t adcResult;
static uint8_t ledDisplay = 0;


/*
                             Application    
 */
void EEPROM(void) {

    if (labState == NOT_RUNNING) {
        LEDs_SetLow();

        labState = RUNNING;
    }

    if (labState == RUNNING) {
        //Get the top 4 MSBs of the ADC and write them to EEPROM
        adcResult = ADCC_GetSingleConversion(POT) >> 12;
        //Printing ADC result on Serial port
        printf("ADC Result: %d\n\r", adcResult);
        EEPROM_Write(EEPROM_START_ADDRESS, adcResult);  //original write code
        if (!NVM_IsBusy());
        //Load whatever is in EEPROM to the LED Display
        ledDisplay = EEPROM_Read(EEPROM_START_ADDRESS);

         printf("LED Result: %d\n\r", ledDisplay);
        //Determine which LEDs will light up
        LEDs = ledDisplay << 4;
    }

    if (switchEvent) {
        labState = NOT_RUNNING;
    }
}


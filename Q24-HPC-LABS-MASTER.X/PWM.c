#include "mcc_generated_files/system/system.h"
#include "labs.h"

/**
  Section: Local Function Prototypes
 */
void PWM_Output_D5_Enable(void);
void PWM_Output_D5_Disable(void);

/**
  Section: Local Variable Declarations
 */
static uint16_t adcResult;

/*
                             Application    
 */
void PWM(void) {
    if (labState == NOT_RUNNING) {
        PWM1_16BIT_Enable();
        LEDs_SetLow();
        PWM_Output_D5_Enable();

        labState = RUNNING;
    }

    if (labState == RUNNING) {
        adcResult = ADCC_GetSingleConversion(POT) >> 6;
        //Printing ADC result on Serial port
        printf("ADC Result: %d\n\r", adcResult);
        PWM1_16BIT_SetSlice1Output1DutyCycleRegister(adcResult);
        PWM1_16BIT_LoadBufferRegisters();
    }

    if (switchEvent) {
        LEDs_SetLow();
        PWM1_16BIT_Disable();
        PWM_Output_D5_Disable();
//        TRISAbits.TRISA7 = 0;
//        ANSELAbits.ANSELA7 = 0;
//        LATAbits.LATA7 = 1;
        labState = NOT_RUNNING;
    }
}

void PWM_Output_D5_Enable(void) {
//    PPSLOCK = 0x55;
//    PPSLOCK = 0xAA;
//    PPSLOCKbits.PPSLOCKED = 0; // unlock PPS

    // Set D5 as the output of PWM3S1P1 through CLC1
    RA7PPS = 0x01;

//    PPSLOCK = 0x55;
//    PPSLOCK = 0xAA;
//    PPSLOCKbits.PPSLOCKED = 1; // lock PPS
}

void PWM_Output_D5_Disable(void) {
//    PPSLOCK = 0x55;
//    PPSLOCK = 0xAA;
//    PPSLOCKbits.PPSLOCKED = 0; // unlock PPS

    // Set D5 as GPIO pin
    RA7PPS = 0x00;

//    PPSLOCK = 0x55;
//    PPSLOCK = 0xAA;
//    PPSLOCKbits.PPSLOCKED = 1; // lock PPS
    
}
/**
 End of File
 */

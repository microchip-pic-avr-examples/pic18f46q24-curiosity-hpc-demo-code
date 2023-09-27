#include "mcc_generated_files/system/system.h"
#include "labs.h"

/**
  Section: Local Function Prototypes
 */
void LAB_ISR(void);

/**
  Section: Local Variable Declarations
 */
static uint8_t rotateReg;

/*
                             Application    
 */
void Interrupts_Lab(void) {

    if (labState == NOT_RUNNING) {
        LEDs_SetLow();
        LED_D2_SetHigh();
        
        rotateReg = 1;
       
        INTERRUPT_GlobalInterruptEnable();
        INTERRUPT_TMR0InterruptEnable();
        
        TMR0_OverflowCallbackRegister(LAB_ISR);
 
        labState = RUNNING;
    }

    if(labState == RUNNING){ 
        // Do nothing. Just wait for an interrupt event 
    }
    
    if (switchEvent) {
        INTERRUPT_TMR0InterruptDisable();
        INTERRUPT_GlobalInterruptDisable();

        labState = NOT_RUNNING;
    }
}

void LAB_ISR(void) {    
    //If the last LED has been lit, restart the pattern    
    if (rotateReg == 1) {
        rotateReg = LAST;
    }

    rotateReg >>= 1;
    
    //Check which LED should be lit
    LEDs = (rotateReg << 4);
}

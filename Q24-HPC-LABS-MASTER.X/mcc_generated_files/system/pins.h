/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.0
*/

/*
� [2023] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA0 aliases
#define POT_TRIS                 TRISAbits.TRISA0
#define POT_LAT                  LATAbits.LATA0
#define POT_PORT                 PORTAbits.RA0
#define POT_WPU                  WPUAbits.WPUA0
#define POT_OD                   ODCONAbits.ODCA0
#define POT_ANS                  ANSELAbits.ANSELA0
#define POT_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define POT_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define POT_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define POT_GetValue()           PORTAbits.RA0
#define POT_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define POT_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define POT_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define POT_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define POT_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define POT_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define POT_SetAnalogMode()      do { ANSELAbits.ANSELA0 = 1; } while(0)
#define POT_SetDigitalMode()     do { ANSELAbits.ANSELA0 = 0; } while(0)

// get/set RA4 aliases
#define LED_D2_TRIS                 TRISAbits.TRISA4
#define LED_D2_LAT                  LATAbits.LATA4
#define LED_D2_PORT                 PORTAbits.RA4
#define LED_D2_WPU                  WPUAbits.WPUA4
#define LED_D2_OD                   ODCONAbits.ODCA4
#define LED_D2_ANS                  ANSELAbits.ANSELA4
#define LED_D2_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define LED_D2_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define LED_D2_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define LED_D2_GetValue()           PORTAbits.RA4
#define LED_D2_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define LED_D2_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define LED_D2_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define LED_D2_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define LED_D2_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define LED_D2_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define LED_D2_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define LED_D2_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set RA5 aliases
#define LED_D3_TRIS                 TRISAbits.TRISA5
#define LED_D3_LAT                  LATAbits.LATA5
#define LED_D3_PORT                 PORTAbits.RA5
#define LED_D3_WPU                  WPUAbits.WPUA5
#define LED_D3_OD                   ODCONAbits.ODCA5
#define LED_D3_ANS                  ANSELAbits.ANSELA5
#define LED_D3_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LED_D3_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LED_D3_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LED_D3_GetValue()           PORTAbits.RA5
#define LED_D3_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LED_D3_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LED_D3_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define LED_D3_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define LED_D3_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define LED_D3_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define LED_D3_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define LED_D3_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set RA6 aliases
#define LED_D4_TRIS                 TRISAbits.TRISA6
#define LED_D4_LAT                  LATAbits.LATA6
#define LED_D4_PORT                 PORTAbits.RA6
#define LED_D4_WPU                  WPUAbits.WPUA6
#define LED_D4_OD                   ODCONAbits.ODCA6
#define LED_D4_ANS                  ANSELAbits.ANSELA6
#define LED_D4_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define LED_D4_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define LED_D4_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define LED_D4_GetValue()           PORTAbits.RA6
#define LED_D4_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define LED_D4_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define LED_D4_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define LED_D4_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define LED_D4_SetPushPull()        do { ODCONAbits.ODCA6 = 0; } while(0)
#define LED_D4_SetOpenDrain()       do { ODCONAbits.ODCA6 = 1; } while(0)
#define LED_D4_SetAnalogMode()      do { ANSELAbits.ANSELA6 = 1; } while(0)
#define LED_D4_SetDigitalMode()     do { ANSELAbits.ANSELA6 = 0; } while(0)

// get/set RA7 aliases
#define LED_D5_TRIS                 TRISAbits.TRISA7
#define LED_D5_LAT                  LATAbits.LATA7
#define LED_D5_PORT                 PORTAbits.RA7
#define LED_D5_WPU                  WPUAbits.WPUA7
#define LED_D5_OD                   ODCONAbits.ODCA7
#define LED_D5_ANS                  ANSELAbits.ANSELA7
#define LED_D5_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define LED_D5_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define LED_D5_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define LED_D5_GetValue()           PORTAbits.RA7
#define LED_D5_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define LED_D5_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define LED_D5_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define LED_D5_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define LED_D5_SetPushPull()        do { ODCONAbits.ODCA7 = 0; } while(0)
#define LED_D5_SetOpenDrain()       do { ODCONAbits.ODCA7 = 1; } while(0)
#define LED_D5_SetAnalogMode()      do { ANSELAbits.ANSELA7 = 1; } while(0)
#define LED_D5_SetDigitalMode()     do { ANSELAbits.ANSELA7 = 0; } while(0)

// get/set RB4 aliases
#define SWITCH_S1_TRIS                 TRISBbits.TRISB4
#define SWITCH_S1_LAT                  LATBbits.LATB4
#define SWITCH_S1_PORT                 PORTBbits.RB4
#define SWITCH_S1_WPU                  WPUBbits.WPUB4
#define SWITCH_S1_OD                   ODCONBbits.ODCB4
#define SWITCH_S1_ANS                  ANSELBbits.ANSELB4
#define SWITCH_S1_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define SWITCH_S1_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define SWITCH_S1_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define SWITCH_S1_GetValue()           PORTBbits.RB4
#define SWITCH_S1_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define SWITCH_S1_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define SWITCH_S1_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define SWITCH_S1_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define SWITCH_S1_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define SWITCH_S1_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define SWITCH_S1_SetAnalogMode()      do { ANSELBbits.ANSELB4 = 1; } while(0)
#define SWITCH_S1_SetDigitalMode()     do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set RB6 aliases
#define RX_TRIS                 TRISBbits.TRISB6
#define RX_LAT                  LATBbits.LATB6
#define RX_PORT                 PORTBbits.RB6
#define RX_WPU                  WPUBbits.WPUB6
#define RX_OD                   ODCONBbits.ODCB6
#define RX_ANS                  ANSELBbits.ANSELB6
#define RX_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define RX_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define RX_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define RX_GetValue()           PORTBbits.RB6
#define RX_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define RX_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define RX_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define RX_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define RX_SetPushPull()        do { ODCONBbits.ODCB6 = 0; } while(0)
#define RX_SetOpenDrain()       do { ODCONBbits.ODCB6 = 1; } while(0)
#define RX_SetAnalogMode()      do { ANSELBbits.ANSELB6 = 1; } while(0)
#define RX_SetDigitalMode()     do { ANSELBbits.ANSELB6 = 0; } while(0)

// get/set RB7 aliases
#define TX_TRIS                 TRISBbits.TRISB7
#define TX_LAT                  LATBbits.LATB7
#define TX_PORT                 PORTBbits.RB7
#define TX_WPU                  WPUBbits.WPUB7
#define TX_OD                   ODCONBbits.ODCB7
#define TX_ANS                  ANSELBbits.ANSELB7
#define TX_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define TX_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define TX_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define TX_GetValue()           PORTBbits.RB7
#define TX_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define TX_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define TX_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define TX_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define TX_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define TX_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define TX_SetAnalogMode()      do { ANSELBbits.ANSELB7 = 1; } while(0)
#define TX_SetDigitalMode()     do { ANSELBbits.ANSELB7 = 0; } while(0)

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/
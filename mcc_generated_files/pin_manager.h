/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC16F18345
        Driver Version    :  2.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB 	          :  MPLAB X 4.15	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set POT_INPUT aliases
#define POT_INPUT_TRIS                 TRISAbits.TRISA2
#define POT_INPUT_LAT                  LATAbits.LATA2
#define POT_INPUT_PORT                 PORTAbits.RA2
#define POT_INPUT_WPU                  WPUAbits.WPUA2
#define POT_INPUT_OD                   ODCONAbits.ODCA2
#define POT_INPUT_ANS                  ANSELAbits.ANSA2
#define POT_INPUT_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define POT_INPUT_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define POT_INPUT_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define POT_INPUT_GetValue()           PORTAbits.RA2
#define POT_INPUT_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define POT_INPUT_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define POT_INPUT_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define POT_INPUT_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define POT_INPUT_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define POT_INPUT_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define POT_INPUT_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define POT_INPUT_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set ONE_WIRE_DQ aliases
#define ONE_WIRE_DQ_TRIS                 TRISBbits.TRISB4
#define ONE_WIRE_DQ_LAT                  LATBbits.LATB4
#define ONE_WIRE_DQ_PORT                 PORTBbits.RB4
#define ONE_WIRE_DQ_WPU                  WPUBbits.WPUB4
#define ONE_WIRE_DQ_OD                   ODCONBbits.ODCB4
#define ONE_WIRE_DQ_ANS                  ANSELBbits.ANSB4
#define ONE_WIRE_DQ_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define ONE_WIRE_DQ_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define ONE_WIRE_DQ_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define ONE_WIRE_DQ_GetValue()           PORTBbits.RB4
#define ONE_WIRE_DQ_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define ONE_WIRE_DQ_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define ONE_WIRE_DQ_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define ONE_WIRE_DQ_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define ONE_WIRE_DQ_SetPushPull()        do { ODCONBbits.ODCB4 = 0; } while(0)
#define ONE_WIRE_DQ_SetOpenDrain()       do { ODCONBbits.ODCB4 = 1; } while(0)
#define ONE_WIRE_DQ_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define ONE_WIRE_DQ_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set channel_ANB5 aliases
#define channel_ANB5_TRIS                 TRISBbits.TRISB5
#define channel_ANB5_LAT                  LATBbits.LATB5
#define channel_ANB5_PORT                 PORTBbits.RB5
#define channel_ANB5_WPU                  WPUBbits.WPUB5
#define channel_ANB5_OD                   ODCONBbits.ODCB5
#define channel_ANB5_ANS                  ANSELBbits.ANSB5
#define channel_ANB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define channel_ANB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define channel_ANB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define channel_ANB5_GetValue()           PORTBbits.RB5
#define channel_ANB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define channel_ANB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define channel_ANB5_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define channel_ANB5_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define channel_ANB5_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define channel_ANB5_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define channel_ANB5_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define channel_ANB5_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set channel_ANB7 aliases
#define channel_ANB7_TRIS                 TRISBbits.TRISB7
#define channel_ANB7_LAT                  LATBbits.LATB7
#define channel_ANB7_PORT                 PORTBbits.RB7
#define channel_ANB7_WPU                  WPUBbits.WPUB7
#define channel_ANB7_OD                   ODCONBbits.ODCB7
#define channel_ANB7_ANS                  ANSELBbits.ANSB7
#define channel_ANB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define channel_ANB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define channel_ANB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define channel_ANB7_GetValue()           PORTBbits.RB7
#define channel_ANB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define channel_ANB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define channel_ANB7_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define channel_ANB7_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define channel_ANB7_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define channel_ANB7_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define channel_ANB7_SetAnalogMode()      do { ANSELBbits.ANSB7 = 1; } while(0)
#define channel_ANB7_SetDigitalMode()     do { ANSELBbits.ANSB7 = 0; } while(0)

// get/set channel_ANC0 aliases
#define channel_ANC0_TRIS                 TRISCbits.TRISC0
#define channel_ANC0_LAT                  LATCbits.LATC0
#define channel_ANC0_PORT                 PORTCbits.RC0
#define channel_ANC0_WPU                  WPUCbits.WPUC0
#define channel_ANC0_OD                   ODCONCbits.ODCC0
#define channel_ANC0_ANS                  ANSELCbits.ANSC0
#define channel_ANC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define channel_ANC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define channel_ANC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define channel_ANC0_GetValue()           PORTCbits.RC0
#define channel_ANC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define channel_ANC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define channel_ANC0_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define channel_ANC0_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define channel_ANC0_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define channel_ANC0_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define channel_ANC0_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define channel_ANC0_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set RELAY_CTRL aliases
#define RELAY_CTRL_TRIS                 TRISCbits.TRISC5
#define RELAY_CTRL_LAT                  LATCbits.LATC5
#define RELAY_CTRL_PORT                 PORTCbits.RC5
#define RELAY_CTRL_WPU                  WPUCbits.WPUC5
#define RELAY_CTRL_OD                   ODCONCbits.ODCC5
#define RELAY_CTRL_ANS                  ANSELCbits.ANSC5
#define RELAY_CTRL_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RELAY_CTRL_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RELAY_CTRL_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RELAY_CTRL_GetValue()           PORTCbits.RC5
#define RELAY_CTRL_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RELAY_CTRL_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define RELAY_CTRL_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define RELAY_CTRL_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define RELAY_CTRL_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define RELAY_CTRL_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define RELAY_CTRL_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define RELAY_CTRL_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/
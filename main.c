/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

#include "main.h"

#define LOW_EDGE    20
#define HIGH_EDGE   40

void main(void)
{
    SYSTEM_Initialize();
    
    ADC_TemperatureAcquisitionDelay();
    
    adc_result_t potentPos;
    uint8_t currentTemp;
    uint8_t OneWire_Data[SCRATCHPAD_BYTES];
    
    while(1)
    {
        startOneWire();
        sendByteOneWire(SKIP_ROM);
        sendByteOneWire(WRITE_SCRATCHPAD);
        sendByteOneWire(TH_REGISTER);
        sendByteOneWire(TL_REGISTER);
        sendByteOneWire(CONFIGURATION_REGISTER);

        startOneWire();
        sendByteOneWire(SKIP_ROM);
        sendByteOneWire(CONVERT_T);
        __delay_us(DELAY_CONVERSION);

        startOneWire();
        sendByteOneWire(SKIP_ROM);
        sendByteOneWire(READ_SCRATCHPAD);

        for (uint8_t i = 0; i < SCRATCHPAD_BYTES; i++)
            OneWire_Data[i] = OneWire_ReadByte();

        currentTemp = (uint8_t)((OneWire_Data[1]&0x0F)<<4 | (OneWire_Data[0]&0xF0)>>4);

        potentPos = (ADC_GetConversion(POT_INPUT)/(1024/(HIGH_EDGE - LOW_EDGE))) + LOW_EDGE;
        
        if (currentTemp >= potentPos + 1)
            RELAY_CTRL_SetHigh();
        else if (currentTemp <= potentPos - 1)
            RELAY_CTRL_SetLow();
    }
}


/*
 * File:   onewire.c
 * Author: admin
 *
 * Created on 14 ??? 2018 ?., 13:47
 */

#include "onewire.h"

//Make TX array with send flag 
//Need struct: data address, data length, data send flag

//Also need to make RX array with flag
//Need to include in struct error flag. Or address to struct with errors in

void setHighOneWire(void)
{
    ONE_WIRE_DQ_SetHigh();
}

void setLowOneWire(void)
{
    ONE_WIRE_DQ_SetLow();
}

void setOneWireToOutput(void)
{
    ONE_WIRE_DQ_SetDigitalOutput();
}

void setOneWireToInput(void)
{
    ONE_WIRE_DQ_SetDigitalInput();
}

bool readOneWireBit(void)
{
    return ONE_WIRE_DQ_GetValue();
}

//For first time: make stupid sync app 

void startOneWire(void)
{
    setOneWireToOutput();
    setLowOneWire();
    __delay_us(MASTER_TX_RESET_PULSE);
    setHighOneWire();
    setOneWireToInput();
    __delay_us(DS18B20_WAIT);
    while(readOneWireBit() != 0);
    __delay_us(DS18B20_TX_PRESENCE_PULSE);
    while(readOneWireBit() == 0);
    __delay_us(MASTER_RX);
}


void sendByteOneWire(uint8_t Byte)
{
	uint8_t i;
    
    setOneWireToOutput();
    
	for(i = 0; i < 8; i++)
    {
        setLowOneWire();
        if (Byte&0x01)
        {
            __delay_us(DELAY_WRITE_1_LOW_TIME);
            setHighOneWire();
            __delay_us(DELAY_TIMESLOT);
        }
        else
        {
            __delay_us(DELAY_WRITE_0_LOW_TIME);
            setHighOneWire();
            __delay_us(DELAY_RECOVERY);
        }
        Byte>>=1;
    }
    setOneWireToInput();
}


uint8_t OneWire_ReadByte(void)
{
	uint8_t t = 0;
    
	for (uint8_t i = 0; i < 8; i++)
	{
		setOneWireToOutput();
		setLowOneWire();
		__delay_us(DELAY_READ_LOW_TIME);
		setHighOneWire();
		__delay_us(DELAY_READ_DATA);
		t |= (uint8_t)(readOneWireBit() << i);
		__delay_us(DELAY_TIMESLOT);
	}
	return t;
}
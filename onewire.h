/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef ONEWIRE_H
#define	ONEWIRE_H

//Master reset timings and slave presence
#define MASTER_TX_RESET_PULSE       480 + 10
#define DS18B20_WAIT                15 + 15
#define DS18B20_TX_PRESENCE_PULSE   60 + 40
#define MASTER_RX                   480 

#define MASTER_WRITE_0_START        60
#define MASTER_WRITE_0_STOP         1

#define MASTER_WRITE_1_START        1
#define MASTER_WRITE_1_STOP         60

#define MASTER_READ_0_START         15
#define MASTER_READ_0_STOP          45
#define MASTER_READ_TREC            1

#define MASTER_READ_1_START         1
#define MASTER_READ_1_STOP          15

#define DELAY_CONVERSION 100000
#define DELAY_WRITE_0_LOW_TIME 90
#define DELAY_WRITE_1_LOW_TIME 5
#define DELAY_RESET_TIME_HIGH 480
#define DELAY_RESET_TIME_LOW 480
#define DELAY_PRESENCE_DETECT_LOW 120
#define DELAY_PRESENCE_DETECT_HIGH 40
#define DELAY_TIMESLOT 90
#define DELAY_RECOVERY 1
#define DELAY_READ_LOW_TIME 5
#define DELAY_READ_DATA 10

//Commands for 1-wire
#define SKIP_ROM 0xCC
#define CONVERT_T 0x44
#define READ_SCRATCHPAD 0xBE
#define WRITE_SCRATCHPAD 0x4E

//Data for registers
#define TH_REGISTER 0x00
#define TL_REGISTER 0x00
#define CONFIGURATION_REGISTER 0x1F //Max conversion speed (9 bit)

#define SCRATCHPAD_BYTES 9

#include "mcc_generated_files/mcc.h" 


void startOneWire(void);
void sendByteOneWire(uint8_t);
uint8_t OneWire_ReadByte(void);


#endif	/* ONEWIRE_H */


#ifndef _DELAY_H
#define _DELAY_H

#include "stm32f10x.h"

void sw_delay_us(uint32_t number_of_us);
void sw_delay_ms(uint32_t number_of_ms);


void sw_delay_us(uint32_t number_of_us)
{
	if(!number_of_us)
        return;
__asm
    {
loop:
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    NOP
		NOP
    NOP
    NOP
    NOP
    NOP
    NOP
    SUBS number_of_us, #1 
    BNE loop 
    }
}
void sw_delay_ms(uint32_t number_of_ms)
{
    sw_delay_us(1000*number_of_ms);
}

#endif


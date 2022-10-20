/*
 * main.c
 *
 *  Created on: Oct 10, 2022
 *      Author: Lenovo
 */


#include"Timer.h"
#include"Interrupt.h"
#include"DIO.h"
#include"Button.h"
#include<avr/interrupt.h>
#include<util/delay.h>
uint8 counter=0;
uint8 timer_counter=0;
uint8 i;
ISR(INT0_vect)
{
	PORTA_REG|=(1<<0)|(1<<1)|(1<<2)|(1<<3);
	PORTC_REG&=~((1<<0)|(1<<1)|(1<<2)|(1<<3));
}

ISR(TIMER0_COMP_vect)
{
	seven_seg1();
	_delay_ms(1000);
	seven_seg2();
	_delay_ms(1000);
	seven_seg3();
	_delay_ms(1000);
	seven_seg4();
	_delay_ms(1000);
}

int main()
{
	seven_seg_init();
	button_init();
	int0_init();
	Timer0_CTC_init();
	PORTA_REG=0x0f;
	PORTC_REG=0xf0;

	while(1)
	{
	}

	return 0;
}

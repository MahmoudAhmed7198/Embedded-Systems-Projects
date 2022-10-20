/*
 * seven_segment.c
 *
 *  Created on: Oct 10, 2022
 *      Author: Lenovo
 */
#include"seven_segment.h"
void seven_seg_init()
{
	set_pin_direction(PORTC,PIN0,OUTPUT);//seven segment data
	set_pin_direction(PORTC,PIN1,OUTPUT);
	set_pin_direction(PORTC,PIN2,OUTPUT);
	set_pin_direction(PORTC,PIN3,OUTPUT);

	set_pin_direction(PORTA,PIN0,OUTPUT);//seven segment enable
	set_pin_direction(PORTA,PIN1,OUTPUT);
	set_pin_direction(PORTA,PIN2,OUTPUT);
	set_pin_direction(PORTA,PIN3,OUTPUT);

}
void seven_seg1()
{
	PORTA_REG=0x08;
	timer_counter++;
	if(timer_counter==4)
	{
	if((PORTC_REG & 0x0f) == 9)
	{
		counter=0;
		PORTC_REG=(PORTC_REG & 0xf0)|(counter & 0x0f);
	}
	else
	{
		counter++;
		PORTC_REG=(PORTC_REG & 0xf0)|(counter & 0x0f);
	}
	timer_counter=0;
	}

}
void seven_seg2()
{
	PORTA_REG=0x04;
	timer_counter++;
	if(timer_counter==4)
	{
	if((PORTC_REG & 0x0f) == 9)
	{
		counter=0;
		PORTC_REG=(PORTC_REG & 0xf0)|(counter & 0x0f);
	}
	else
	{
		counter++;
		PORTC_REG=(PORTC_REG & 0xf0)|(counter & 0x0f);
	}
	timer_counter=0;
	}
}
void seven_seg3()
{
	PORTA_REG=0x02;
	timer_counter++;
	if(timer_counter==4)
	{
	if((PORTC_REG & 0x0f) == 9)
	{
		counter=0;
		PORTC_REG=(PORTC_REG & 0xf0)|(counter & 0x0f);
	}
	else
	{
		counter++;
		PORTC_REG=(PORTC_REG & 0xf0)|(counter & 0x0f);
	}
	timer_counter=0;
	}

}
void seven_seg4()
{
	PORTA_REG=0x01;
	timer_counter++;
	if(timer_counter==4)
	{
	if((PORTC_REG & 0x0f) == 9)
	{
		counter=0;
		PORTC_REG=(PORTC_REG & 0xf0)|(counter & 0x0f);
	}
	else
	{
		counter++;
		PORTC_REG=(PORTC_REG & 0xf0)|(counter & 0x0f);
	}
	timer_counter=0;
	}

}


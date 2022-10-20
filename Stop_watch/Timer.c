/*
 * Timer.c
 *
 *  Created on: Oct 18, 2022
 *      Author: Lenovo
 */
#include"Timer.h"

void Timer0_init()  //Normal mode
{
	SET_BIT(TCCR0_REG,0);
	SET_BIT(TCCR0_REG,2);     //1024 presceler  and normal mode(overflow)
	SET_BIT(TCCR0_REG,7);    //FOC0 bit set to 1 in case now pwm mode

	SET_BIT(SREG_REG,7);
	SET_BIT(TIMSK_REG,0);

	TCNT0_REG=0;

}
void Timer0_CTC_init()
{
	SET_BIT(TCCR0_REG,0);  //1024 presceler
	SET_BIT(TCCR0_REG,2);  //1024 presceler
	SET_BIT(TCCR0_REG,3);  //WGM wave generator mode ctc0 top value in OCR0
	SET_BIT(TCCR0_REG,7);  //FOC0 set in CTC and normal modes
	//SET_BIT(TCCR0_REG,4);      //COM00 that generate square wave and use OC0 pin to toggle led
	SET_BIT(SREG_REG,7);  //GIE
	SET_BIT(TIMSK_REG,1); //MIE

	TCNT0_REG=0;         //Timer counter register that count till OCR0
	OCR0_REG=250;		//every half second = 500ms 500/250=2overflows

}


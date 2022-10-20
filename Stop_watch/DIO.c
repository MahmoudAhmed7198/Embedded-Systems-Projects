/*
 * DIO.c
 *
 *  Created on: Oct 10, 2022
 *      Author: Lenovo
 */

#include"DIO.h"

void set_port_direction(PORT_Type p , PORT_DIRECTION direction)
{
	if(direction == OUTPUT)
	{
		switch(p)
		{
		case PORTA:
			DDRA_REG=0xff;
			break;
		case PORTB:
			DDRB_REG=0xff;
			break;
		case PORTC:
			DDRC_REG=0xff;
			break;
		case PORTD:
			DDRD_REG=0xff;
			break;
		}
	}
	else if(direction == INPUT)
	{
		switch(p)
		{
		case PORTA:
			DDRA_REG=0x00;
			break;
		case PORTB:
			DDRB_REG=0x00;
			break;
		case PORTC:
			DDRC_REG=0x00;
			break;
		case PORTD:
			DDRD_REG=0x00;
			break;

		}

	}


}
void set_pin_direction(PORT_Type p , PIN_NUM pnum , PORT_DIRECTION direction)
{
	if(direction == OUTPUT)
	{
		switch(p)
		{
		case PORTA:
			SET_BIT(DDRA_REG,pnum);
			break;
		case PORTB:
			SET_BIT(DDRB_REG,pnum);
			break;
		case PORTC:
			SET_BIT(DDRC_REG,pnum);
			break;
		case PORTD:
			SET_BIT(DDRD_REG,pnum);
			break;
		}

	}
	else if(direction == INPUT)
	{
		switch(p)
		{
		case PORTA:
			CLEAR_BIT(DDRA_REG,pnum);
					break;
		case PORTB:
			CLEAR_BIT(DDRB_REG,pnum);
					break;
		case PORTC:
			CLEAR_BIT(DDRC_REG,pnum);
					break;
		case PORTD:
			CLEAR_BIT(DDRD_REG,pnum);
					break;

		}

	}

}
void set_port_value(PORT_Type p , uint8 val)
{
	switch(p)
		{
			case PORTA:
				PORTA_REG=val;
				break;
			case PORTB:
				PORTB_REG=val;
				break;
			case PORTC:
				PORTC_REG=val;
				break;
			case PORTD:
				PORTD_REG=val;
				break;
		}

}
void set_pin_value(PORT_Type p , PIN_NUM pnum , DIO_VAL val)
{
	if(val == HIGH)
	{
	  switch(p)
		{
			case PORTA:
				SET_BIT(PORTA_REG,pnum);
				break;
			case PORTB:
				SET_BIT(PORTB_REG,pnum);
				break;
			case PORTC:
				SET_BIT(PORTC_REG,pnum);
				break;
			case PORTD:
				SET_BIT(PORTD_REG,pnum);
				break;
		 }
	  }
	 else if(val == LOW)
	 {
	   switch(p)
		{
			case PORTA:
				CLEAR_BIT(PORTA_REG,pnum);
				break;
			case PORTB:
				CLEAR_BIT(PORTB_REG,pnum);
				break;
			case PORTC:
				CLEAR_BIT(PORTC_REG,pnum);
				break;
			case PORTD:
				CLEAR_BIT(PORTD_REG,pnum);
				break;
		}

	   }

  }
 DIO_VAL get_pin_value(PORT_Type p,PIN_NUM pnum)
 {
   DIO_VAL x;
	switch(p)
		{
			case PORTA:
				x=GET_BIT(PINA_REG,pnum);
				break;
			case PORTB:
				x=GET_BIT(PINB_REG,pnum);
				break;
            case PORTC:
               x=GET_BIT(PINC_REG,pnum);
               break;
           case PORTD:
                x=GET_BIT(PIND_REG,pnum);
                break;

		}
		return x;
 }




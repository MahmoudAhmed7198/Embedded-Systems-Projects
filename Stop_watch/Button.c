/*
 * Button.c
 *
 *  Created on: Oct 10, 2022
 *      Author: Lenovo
 */
#include"Button.h"
uint8 i;
void button_init()
{
	set_pin_direction(PORTD,PIN2,INPUT);
	set_pin_direction(PORTD,PIN3,INPUT);
}
void start_button()
{


}
void stop_reset_button()
{

}

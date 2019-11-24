#include <avr/io.h>
#include <avr/interrupt.h>
#include "App.h"
APP_TASK(Init_Task)
{
	DDRB |= (1<<PB0);
	DDRB |= (1<<PB1);
	DDRB |= (1<<PB2);
}

APP_TASK(5ms_task)
{
	PORTB ^= (1<<PB0);	
}

APP_TASK(10ms_task)
{
	PORTB ^= (1<<PB1);
}
// ***********************************************************
// Project:
// Author:
// Module description:
// ***********************************************************

#include <avr\io.h>              // Most basic include files
#include <avr\interrupt.h>       // Add the necessary ones
#include <avr\signal.h>          // here
#include<util/delay.h>

void boot_program(void)
{
		DDRB = 0XFF;
		
	   PORTB ^= 0XFF;
	  _delay_ms(100);
	  // PORTB = 0x00;
	  // _delay_ms(100);
}
	

// *********************************************************// Main program

int main(void)
{
		boot_program();
  	asm("rjmp 0x0000");
	
		PORTB = 0xFF;
		_delay_ms(100);
	   PORTB = 0x00;
	   _delay_ms(100); 	

}



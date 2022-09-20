#include <avr/io.h>
#include <util/delay.h>
void Display(int x){
	DDRA = 0xFF;

	switch(x){
	case '1': PORTA |=(1<<PA2)|(1<<PA3);break;
	case '2': PORTA = 0xFF; PORTA&=~(1<<PA4); PORTA &=~(1<<PA7);break;
	case '3': PORTA = 0xFF; PORTA&=~(1<<PA5); PORTA &=~(1<<PA7);break;
	case '4': PORTA = 0xFF; PORTA&=~(1<<PA5); PORTA &=~(1<<PA1);PORTA &=~(1<<PA4);break;
	case '5': PORTA = 0xFF; PORTA&=~(1<<PA5); PORTA &=~(1<<PA2);break;
	case '6': PORTA = 0xFF; PORTA&=~(1<<PA1); PORTA &=~(1<<PA2);break;
	case '7': PORTA |=(1<<PA2)|(1<<PA3)|(1<<PA1);break;
	case '8': PORTA = 0xFF;break;
	case '9': PORTA = 0xFF; PORTA &=~(1<<PA5);break;







	}





}

int main(){
	DDRA = 0xFF;

   PORTA = 0;

	while(1){
Display(1);
_delay_ms(1000);
Display(2);
_delay_ms(1000);
Display(3);
_delay_ms(1000);
Display(4);
_delay_ms(1000);
Display(5);
_delay_ms(1000);
Display(6);
_delay_ms(1000);
Display(7);
_delay_ms(1000);
Display(8);
_delay_ms(1000);
Display(9);
_delay_ms(1000);



	}



}




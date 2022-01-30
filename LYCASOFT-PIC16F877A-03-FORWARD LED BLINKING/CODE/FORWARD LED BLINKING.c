#include<pic.h>
#include<htc.h>
#define _XTAL_FREQ 20e6
__CONFIG(0X3F3A);

void main()
{
	int K;
	TRISB=0X00;
	PORTB=0X00;
	
	K=0x01;
	
	while(1)
	{
		PORTB=K;
		__delay_ms(1000);
		K=K<<1;
		if(K>0X80)
		{
			K=0X01;
		}
	}
}
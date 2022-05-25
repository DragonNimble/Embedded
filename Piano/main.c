#include <REGX52.H>
#include "Timer0.h"
#include "MatrixKey.h"

sbit Buzzer=P2^5;

unsigned int FqTable[] = {
	0,
	64580,64684,64777,64820,64898,64968,65030,0,
	65058,65110,65157,65178,65217,65252,65283
};

unsigned char FreqSelect = 0;
unsigned char KeyNum;

void main()
{
	Timer0Init();
	while(1)
	{
		KeyNum = MatrixKey();
		if(KeyNum > 0 && KeyNum < 16)
			FreqSelect = KeyNum;
		else
			FreqSelect = 0;
	}
}

void Timer0_Routine() interrupt 1
{
	if(FqTable[FreqSelect])	
	{
		
		TL0 = FqTable[FreqSelect]%256;		
		TH0 = FqTable[FreqSelect]/256;		
		Buzzer=!Buzzer;	
	}
}

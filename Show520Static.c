#include <REGX52.H>
#include <INTRINS.H>

////////////////////
//This program will show static 1314520 
/////////////////
void Delay100us()		//@12.000MHz
{
	unsigned char i;
	int num = 8;
	while(num--)
	{
			_nop_();
		i = 47;
		while (--i);
	}
}
void main()
{
	unsigned char a = 7;
	unsigned char b = 0;
	unsigned char Show[7] = {0X06,0X4F,0X06,0X66,0X6d,0X5b,0X3F};
	while(1)
	{
		P2_4 = a / 4;
		P2_3 = (a / 2) % 2;
		P2_2 = a % 2;
		a -= 1;
		P0 = Show[b];
		b = (b + 1) % 7;
		if(a == 0)
			a = 7;
		Delay100us();		
	}
}

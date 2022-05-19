#include <REGX52.H>
#include <INTRINS.H>

void Delay(unsigned int xms)		//@12.000MHz
{
	unsigned char i, j;
	while(xms--)
	{	
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
	}
}
void main()
{
	int a = 7;
	int b = 0;
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
		Delay(500);
	}
}

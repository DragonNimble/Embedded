#include <REGX52.H>

/**
  * @brief  该函数是对原矩阵函数按键的修改
  * @param  无
  * @retval  返回按下的值	
***/
unsigned char MatrixKey()
{
	unsigned char KeyNumber=0;
	
	P1=0xFF;
	P1_3=0;
	if(P1_7==0){KeyNumber=1;}
	if(P1_6==0){KeyNumber=5;}
	if(P1_5==0){KeyNumber=9;}
	if(P1_4==0){KeyNumber=13;}
	
	P1=0xFF;
	P1_2=0;
	if(P1_7==0){KeyNumber=2;}
	if(P1_6==0){KeyNumber=6;}
	if(P1_5==0){KeyNumber=10;}
	if(P1_4==0){KeyNumber=14;}
	
	P1=0xFF;
	P1_1=0;
	if(P1_7==0){KeyNumber=3;}
	if(P1_6==0){KeyNumber=7;}
	if(P1_5==0){KeyNumber=11;}
	if(P1_4==0){KeyNumber=15;}
	
	P1=0xFF;
	P1_0=0;
	if(P1_7==0){KeyNumber=4;}
	if(P1_6==0){KeyNumber=8;}
	if(P1_5==0){KeyNumber=12;}
	if(P1_4==0){KeyNumber=16;}
	
	return KeyNumber;
}

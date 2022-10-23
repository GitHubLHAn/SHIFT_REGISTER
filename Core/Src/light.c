#include "light.h"

void out1Light(uint8_t data)
{
	uint8_t temp;
	LATCH(0);
	for( int i=0; i<8; i++)
	{
		temp = data & (0x80 >> i);
		if( temp == 0 ){
			DATA(0);}
		else 	
			DATA(1);
		SHIFT(1);
		SHIFT(0);
  }
	LATCH(1);
}

void outNLight(unsigned char ardata[], unsigned int N) // N = number of Shift Register
{
	unsigned char data;
	uint8_t temp;
	LATCH(0);
	for(signed char index=N-1 ; index>=0; index--)
	{
		data = ardata[index];
		for( int i=0; i<8; i++)
		{
		temp = data & (0x80 >> i);
		if( temp == 0 ){
			DATA(0);}
		else 	
			DATA(1);
		SHIFT(1);
		SHIFT(0);
		}
	LATCH(1);
	}
}
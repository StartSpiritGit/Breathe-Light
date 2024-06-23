#include <REG51.h>
#include "P2_BIT.h"

// Function prototypes
int main(void);
void Delay(long* delaycount);

// Global variables
long DelayCount = 0xFFFFFFFFFFFF;
sbit RED_Yellow = P1^0;
// Main function
int main()
{
	char i = 0;
	P1 = 0x55;
	RED_Yellow = 0;
	while(1)
	{
		P2_BIT[i] = Low;
		if(i > 0)
		{
			P2_BIT[i - 1] = High;
		}
		else
		{
			P2_BIT[7] = High;
		}
		P2 = 						\
		((P2_BIT[P2_PORT_PIN_0]<<0) \
		|(P2_BIT[P2_PORT_PIN_1]<<1) \
		|(P2_BIT[P2_PORT_PIN_2]<<2) \
		|(P2_BIT[P2_PORT_PIN_3]<<3) \
		|(P2_BIT[P2_PORT_PIN_4]<<4) \
		|(P2_BIT[P2_PORT_PIN_5]<<5) \
		|(P2_BIT[P2_PORT_PIN_6]<<6) \
		|(P2_BIT[P2_PORT_PIN_7]<<7));
		Delay(&DelayCount);
		i++;
		if(i == 8)
		{
			i = 0;
		}
	}
	
	return ;
}

// Function to delay for a specified 
void Delay(long* delaycount)
{
	while (*delaycount --)
	{
		int i = 0xFFF;
		while(i --);
	}
	
	return ;
}
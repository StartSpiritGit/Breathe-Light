#include <REG51.h>
#include "P2_BIT.h"

// Function prototypes
int main(void);
void Delay(long* delaycount);

// Global variables
long DelayCount = 0xFFFFFFFF;
sbit RED_Yellow = P1^0;
sbit Butten_Switch = P1^7;
sbit Digital_Input = P1^6;

// Main function
int main()
{
	P1 = 0xFF;
	while(1)
	{
		char i = 1;
		P2 = P3;
		if(Butten_Switch == Low)
		{
			 Delay(&DelayCount);
			if(Butten_Switch == Low)
			{
				i = Butten_Switch;
			}
		}
		RED_Yellow = (i || Digital_Input);
	}
	
	return ;
}

// Function to delay for a specified 
void Delay(long* delaycount)
{
	while (*delaycount --)
	{
		int i = 0xFF1;
		while(i --);
	}
	
	return ;
}
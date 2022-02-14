#include "delay.h"


/***************************************
 *
 * ms delay 
 *
 * @param	ms.
 *
 * @return	node.
 *
 * @note	
 **************************************/
void DelayMs(int ms)
{
	int i,j,n;
	for(i=0;i<ms;i++)
		for(j=0;j<100;j++)
			for(n=0;n<100;n++);
}



/***************************************
 *
 * us delay 
 *
 * @param	us.
 *
 * @return	node.
 *
 * @note	
 **************************************/
void DelayUs(int us)
{
	int i,j;
	for(i=0;i<us;i++)
		for(j=0;j<72;j++);
}


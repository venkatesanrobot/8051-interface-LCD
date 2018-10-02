// File Name: led_blink sample
// Author: R.venkatesan


# include <reg51.h>
# include <stdio.h>
sbit led_blink =P1^0 ; // led pin connected on port1^0

void delay(int itime)  // delay operation 
{
unsigned int i,j;
for(i=0;i<itime;i++)
for(j=0;j<1275;j++);
}

void main()
{
while(1)  // while loop for contiue woking on program endless
{
led_blink=1;  // led on 
	delay(100);   //few minute delay
	led_blink=0;  //led off
	delay(100);  //few minute delay
}
}
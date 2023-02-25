#include<reg51.h> /* special function register declarations */
/* for the intended 8051 derivative */

sbit LEDr1_pin = P0^0; //Defining LED PIN     
sbit LEDy1_pin = P0^1; //Defining LED PIN
sbit LEDg1_pin = P0^2; //Defining LED PIN     
sbit LEDr2_pin = P0^3; //Defining LED PIN
sbit LEDy2_pin = P0^4; //Defining LED PIN
sbit LEDg2_pin = P0^5; //Defining LED PIN

void Delay(int); //Function prototype declaration

void main (void)
{
  
	 LEDr1_pin=0; //LED off initially
   LEDy1_pin=0; //LED off initially
   LEDg1_pin=0; //LED off initially
   LEDr2_pin=0; //LED off initially
   LEDy2_pin=0; //LED off initially
   LEDg2_pin=0; //LED off initially

  while(1) //infinite loop
  {

	 LEDr1_pin=1; //LED off initially
   LEDy1_pin=0; //LED off initially
   LEDg1_pin=0; //LED off initially
   LEDr2_pin=0; //LED off initially
   LEDy2_pin=0; //LED off initially
   LEDg2_pin=1; //LED off initially
		
		Delay(4000);

	 LEDr1_pin=1; //LED off initially
   LEDy1_pin=0; //LED off initially
   LEDg1_pin=0; //LED off initially
   LEDr2_pin=0; //LED off initially
   LEDy2_pin=1; //LED off initially
   LEDg2_pin=0; //LED off initially

    Delay(1000);		
		
	 LEDr1_pin=0; //LED off initially
   LEDy1_pin=0; //LED off initially
   LEDg1_pin=1; //LED off initially
   LEDr2_pin=1; //LED off initially
   LEDy2_pin=0; //LED off initially
   LEDg2_pin=0; //LED off initially
		
		Delay(4000);
		
	 LEDr1_pin=0; //LED off initially
   LEDy1_pin=1; //LED off initially
   LEDg1_pin=0; //LED off initially
   LEDr2_pin=1; //LED off initially
   LEDy2_pin=0; //LED off initially
   LEDg2_pin=0; //LED off initially
		
		Delay(1000);
  }
}

void Delay(int k)
{
  int j;
  int i;
  for(i=0;i<k;i++)
  {
    for(j=0;j<100;j++)
    {
    }
  }
}
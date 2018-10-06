
#include <wiringPi.h>
#include <stdio.h>
int main (int argc, char *argv[])
{
wiringPiSetup () ;
pinMode (1, INPUT) ;
pinMode (0, OUTPUT) ;
pullUpDnControl(1, PUD_UP) ;
for (;;)
{
int x = digitalRead(1);
if(x==1) digitalWrite (0, LOW) ;
else digitalWrite (0, HIGH) ;
/* printf("Got a %d\n",x); */
}
return 0 ;
}


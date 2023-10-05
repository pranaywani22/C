/*
Author:- Pranay Ajitkumar Wani
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
float hr,ta,da,bs,gs;
printf("\n Enter your basic salary");
scanf("%f",&bs);
{ta= (0.05)*bs;
hr= (0.25)*bs;
da= (0.07)*bs;
gs=bs+hr+ta+da;}
printf("\n hr=%f \t ta=%f \t da=%f",hr,ta,da);
printf("\n Your gross salary is %f",gs);
if(gs>35000)
{
printf("\n yo get a bonous of 2500INR");
gs=gs+2500;
printf("\n your Gross salary of thee month is %f",gs);
}
else
printf("\n you are not eligible for the bonous");
}


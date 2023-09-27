/*
Author :- Pranay Ajitkumar Wani
This is a code with which you can print addition, substraction, multiplication, division of any 2 int values.
it consist of switch case and functions logic.
*/
#include<stdio.h>
#include<conio.h>
int maths();
void main(){
    int i;
printf("\n \n Enter 1 for addition \t 2 for substraction \n 3 for multiplication \t 4 for division \n 5 for modulus\t");
scanf("%d",&i);
maths(i);
}
int maths(x)
{
switch(x)
{
case 1:{int a,b;
printf("\n Enter 2 int numbers");
scanf("%d%d",&a,&b);
printf("\n %d + %d =%d",a,b,a+b);}
    break;
case 2:{int a,b;
printf("\n Enter 2 int numbers");
scanf("%d%d",&a,&b);
printf("\n %d - %d =%d",a,b,a-b);}
    break;
case 3:{ int a,b;
printf("\n Enter 2 int numbers");
scanf("%d%d",&a,&b);
printf("\n %d * %d =%d",a,b,a*b);}
    break;
case 4:{ int a,b;
printf("\n Enter 2 int numbers");
scanf("%d%d",&a,&b);
printf("\n %d/%d =%d",a,b,a/b);}
    break;
case 5:{ int a,b;
printf("\n Enter 2 int numbers");
scanf("%d%d",&a,&b);
printf("\n %d%%d =%d",a,b,a%b);}
    break;
default:
    printf("given number is invalid");
    break;
}
}

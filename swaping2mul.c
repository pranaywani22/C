#include<stdio.h>
#include<conio.h>
void main(){
int x,y;
printf("\n Enter the value of A: \t ");
scanf("%d",&x);
printf("\n Enter the value of B: \t ");
scanf("%d",&y);
printf("\n Values before swaping of X=%d \t Y=%d",x,y);
x=x*y;
y=x/y;
x=x/y;
printf("\n Values after swaping of X=%d \t Y=%d",x,y);
}

/*
Author:- Pranay Ajitkumar Wani
Thsi is a code practiced in c programming to practice logical or
*/
#include<stdio.h>
#include<conio.h>
void main(){
    int r,x,y,z;
printf("\n Enter the value of X\t");
scanf("%d",&x);
printf("\n Enter the value of Y\t");
scanf("%d",&y);
z=x+y-3;
printf("\n Enter the value of X=%d \t Y=%d \t Z=%d ",x,y,z);
r=x<y || x<z;
printf("\n X<Y || X<Z =%d",r);
r=x<y || x>z;
printf("\n X<Y || X>Z =%d",r);
r=x>y || x>z;
printf("\n X>Y || X>Z =%d",r);
r=x>y || x<z;
printf("\n X>Y || X<Z =%d",r);
}


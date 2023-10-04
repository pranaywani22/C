/*
Author:- Pranay Ajitkumar Wani
This code is designed in c programing to test and ppractice neesteed ternary coondiitional operators 
*/
#include<stdio.h>
#include<conio.h>
void main (){
int x,y,z,r;
printf("\n Enter the three number ");
scanf("%d%d%d",&x,&y,&z);
printf("\n Value of X=%d \t Y=%d \t Z=%d",x,y,z);
r=x>y?(x>z?x:z):(y>z?y:z);
printf("\n Max number =%d",r);
}

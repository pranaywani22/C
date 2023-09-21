/*
Author:- Pranay Ajitkumar Wani
swaping of digits using 3 variables
*/
#include<stdio.h>
#include<conio.h>
int swap();
void main(){
    int a,b;
printf("\n Enter the value of A");
scanf("%d",&a);
printf("\n Enter the value of B");
scanf("%d",&b);
swap(a,b);
}
int swap(int x,int y){
printf("\n Before Swaping A=%d \t B=%d",x,y);
int c;
c=x;
x=y;
y=c;
printf("\n After Swaping A=%d \t B=%d",x,y);}

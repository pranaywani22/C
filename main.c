/* Author:-Pranay Wani
Phibonasi series using functions*/
#include<stdio.h>
#include<conio.h>
int sum,no1=0,no2=1;
int phibonasi();
void main(){
int i,j;
printf("\n Enter the value of u want to repeat the loop");
scanf("%d",&j);
for(i=1;i<=j;i++){
    phibonasi();
}
}
int phibonasi(){

sum=no1+no2;
printf("\n %d",sum);
no1=no2;
no2=sum;
}

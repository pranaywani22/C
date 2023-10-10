/*this code is programmed in c programming to add all even number =s till the user wants to*/
#include<stdio.h>
#include<conio.h>
void main(){
int i=0,no,sum=0;
printf("\n enter the number till which you want to add ");
scanf("%d",&no);
while(i<no && i%2==0)
    {
    sum=sum+i;
    printf("\n Addition of even number u want is %d",sum);
    i++; }

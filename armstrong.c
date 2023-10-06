/*
Author:- Pranay Ajitkumar Wani
This file is structured in c programming to find weather the given number is Armstrong.
*/
#include<stdio.h>
#include<conio.h>
void main(){
    int no,no1,rem,rev=0,k;
printf("\n Enter the number\t  ");
scanf("%d",&no);
no1=no;
for(;no>0;){
    rem=no%10;
    k=rem*rem*rem;
    rev=rev+k;
    no=no/10;
    printf("\n %d=%d",rem,k);
}
if(no1==rev)
    printf("\n Given number is a Armstrong=%d",rem);
else
    printf("\n Given number is not a Armstrong");
}

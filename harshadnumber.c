/*
Author:- Pranay Ajitkumar Wani
This program is structured in C programming to find weather the given number is a Harshad Number or not 
*/
#include<stdio.h>
#include<conio.h>
void main(){
    int no,no1,sum=0,rem;
    printf("\n Enter a number");
    scanf("%d",&no);
    no1=no;
    for(;no>0;no=no/10)
    {
    rem=no%10;
    sum=rem+sum;
   }
    printf("\n sum of digits is %d",sum);
    if(no1%sum==0)
        printf("\n %d is a harshad number",no1);
        else
        printf("\n %d is not a harshad number",no1);

}

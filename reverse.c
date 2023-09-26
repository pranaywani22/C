/*
Author:- Pranay Ajitkumar Waani
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num,rem=0,rev=0;
    printf("Enter the value to reverse it");
    scanf("%d",&num);
    for(;num>0;num=num/10){
        rem=num%10;
        rev=rev*10+rem;
    }
    printf("\n REverse of goven number is %d",rev);
}

/*
Author:- Pranay Ajitkuamar Wani
This file is structured in c programming to find weather the given number is a number plaindrome or not
*/
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
void main(){
    int no,no1,rem=0,rev=0;
printf("\n Enter the number \t");
scanf("%d",&no);
no1=no;
for(;no>0;no=no/10){
    rem=no%10;
    rev=rev*10+rem;
    }
    if(no1==rev)
        printf("\n %d is a palindrom",rev);
    else
        printf("\n %d is not a palindrom",no1);
}

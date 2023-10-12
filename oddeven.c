/*
Author :- Pranay Ajitkumar Wani
This code is structured in C programming language to find weather the given number is odd or even
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    int i;
    printf("\n Enter the number \t");
    scanf("%d",&i);
    if(i%2==0)
    printf("\n %d is even",i);
    else
    printf("\n %d is odd",i);
return 0;
}

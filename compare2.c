/*
Author :- Pranay Ajitkumar Wani
This code is structured in C programming language to find which number is greater out of two given numbers
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b;
    printf("\n Enter first number");
    scanf("%d",&a);
    printf("\n Enter second number");
    scanf("%d",&b);
    printf("\n Value of A=%d \t B=%d",a,b)
    if(a>b)
        printf("%d is greater than %d",a,b);
    else
        printf("%d is greater than %d",b,a);
    return 0;
}

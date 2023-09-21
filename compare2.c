/*
Author :- Pranay Ajitkumar Wani
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b;
    printf("\n Enter 2 int values to compare");
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("%d is greater than %d",a,b);
    else
        printf("%d is greater than %d",b,a);
    return 0;
}

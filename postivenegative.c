/*
Author:- Pranay Ajitkumar Wani
This code is structured in C programming language to find weather the given number is positive negative or zero
*/
#include<conio.h>
#include<stdio.h>
int pn();
int main(){
    int no;
    printf("\n Enter the number ");
    scanf("%d",&no);
    pn(no);
    return 0;
}
int pn(int x){
    if(x>0)
        printf("\n %d is postive",x);
    else if (x<0)
        printf("\n %d is negative",x);
    else
        printf("\n %d is 0",x);
}

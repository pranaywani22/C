/*
Author:- Pranay Ajitkumar Wani
This code is designed in c programming to add the number asked by the user using while loop
*/
#include<stdio.h>
#include<conio.h>
void main(){
    int i=0,no,sum=0;
    printf("\n Enter the number till which you want to add");
    scanf("%d",&no);
    while(i<=no){
        sum=sum+i;
        printf("\n %d",sum);
        i++;
    }
}

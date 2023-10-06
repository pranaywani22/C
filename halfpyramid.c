/*
Author:- Pranay Ajitkukamr Wani
This program is structured in C programming to make a half pyramid of the given number.
*/
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
void main(){
    int i,j,no;
printf("\n Enter the number or rows in the pyramid \t ");
scanf("%d",&no);
for(i=1;i<no;i++){
    for(j=i;j<i;j++){
        printf("\n %d",i);
    }
    printf("\n");
}
}

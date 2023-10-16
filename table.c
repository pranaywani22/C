/*
Author:- Pranay Ajitkumar Wani
This code is programed in C programming language to calctale the tabel f any nmbeeer u want tillt he range u want
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
int number,range,i=0,product;
printf("\n Enter the number for which you want to print the table\t");
scanf("%d",&number);
printf("\n Enter the range of table\t");
scanf("%d",&range);
for(i=1;i<=range;i++){
    product = number*i;
    printf("\n%d X %d  = %d",number,i,product);
}
return 0;
}

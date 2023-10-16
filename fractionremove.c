/*
Author:- Pranay Ajitkumar Wani
*/
#include<stdio.h>

#include<stdlib.h>
int main(){
  int a;
  float b;
  printf("\n Enter a 2 digit number");
  scanf("%d",&a);
  if(a>9 && a<100){
    b=a/4;
    printf("\n %d",&b);
  }
  else
    printf("\n Enter a valid number");
}

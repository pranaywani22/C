/*
Author:- Pranay Ajitkumar Wani
This code is designed in c programming language to convert the character in upper case to lower case
*/
#include<stdio.h>
int main(){
    char ch;
    printf("\n Enter any character in Upper case");
    scanf(" %c",&ch);
    printf("\n %c in lower case is %c",ch,ch+32);
    return 0;
}

#include<stdio.h>
int main(){
    char ch;
    printf("\n Enter a character");
    scanf(" %c",&ch);
    if(ch>='A' && ch<='Z')
    printf("\n The given character is in upper case and the lower case is %c",(ch+32));
    else
    printf("\n The given character is in lower case and the upper case is %c",(ch-32));
}
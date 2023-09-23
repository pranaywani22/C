/*
Author:- Pranay Ajitkumar Wani
This is a program in C structured to swap 2 variable 
*/
void main(){
  int a,b;
  printf("\n Enter the value of A \t ");
  scnaf("%d",&a);
  printf("\n Enter the value of B \t ");
  scnaf("%d",&b);
  printf("\n Before swaping value of A=%d \t B=%d",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("\n After swaping value of A=%d \t B=%d",a,b);
}

#include<stdio.h>
#include<conio.h>
void main(){
int l,h;
float area;
printf("\n Enter the base of the triangle in cm :\t");
scanf("%d",&l);
printf("\n Enter the height of the triangle in cm:\t");
scanf("%d",&h);
area=0.5*l*h;
printf("\n Area of triangle with height of %d cm/s and base of %d cm/s is %f cm square",h,l,area);
}

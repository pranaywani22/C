#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c;
printf("\n Enter the value of A\t");
scanf("%d",&a);
printf("\n Enter the value of B\t");
scanf("%d",&b);
printf("\n Value of A=%d \t B=%d",a,b);
c=a<b;
printf("\n A<B = %d",c);
c=a<=b;
printf("\n A<=B = %d",c);
c=a>b;
printf("\n A>B = %d",c);
c=a>=b;
printf("\n A>=B = %d",c);
c=a==b;
printf("\n A==B = %d",c);
c=a!=b;
printf("\n A!=B = %d",c);

}

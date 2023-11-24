#include<stdio.h>
int main(){
    float sal;
    printf("\n Enter your basic salary in lakhs");
    scanf("%f",&sal);
    if(sal<=2.5)
    printf("\n no tax to be paid");
else if(sal>2.5 && sal<=5)
printf("\n you have to pay rupees %.2f as tax",sal*0.05);
else if(sal>5 && sal<=10)
printf("\n you have to pay rupees %.2f as tax",sal*0.010);
else (sal>10);
printf("\n you have to pay rupees %.2f as tax",sal*0.010);
    return 0;
}
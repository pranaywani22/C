#include<stdio.h>
#include<conio.h>
int main(){
float total,amt,subt,disa,taxa,qty,val,dis,tax;
printf("\n Enter the number of items sold");
scanf("%f",&qty);
printf("\n Enter the value of the items\t ");
scanf("%f",&val);
printf("\n Enter the discount percentage \t ");
scanf("%f",&dis);
printf("\n Enter the tax to be taken \t");
scanf("%f",&tax);
amt=qty*val;
disa=amt*(dis/100);
taxa=amt*tax;
total=amt-disa+taxa;
printf("**********BILL*********");
printf("\n Quantity sold     %.2f",qty);
printf("\n price per peice   %.2f",val);
printf("\n");
printf("\n -----------------------");
printf("\n Amount             %.2f",amt);
printf("\n Discount          -%.2f",disa);
printf("\n Tax applicable     %.2f",taxa);
printf("\n");
printf("\n -----------------------");
printf("\n Grand Total        %.2f",total);
printf("\n ------Thank You -------");
printf("\n ----_Visit Agian-------");
return 0;
}

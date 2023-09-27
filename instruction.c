/*
Author:- Pranay Ajitkumar Wani
The following file is stuructured in c programming to collect different types of values
*/
void main(){
  long int longa;
  char chara;
  float floata;
  unsigned int uia;
  unsigned long int ulonga;
  double db;
  printf("\n Enter the long int value");
  scanf("%ld",&longa);
  
  printf("\n Enter the character");
  scanf("%c",&chara);
  
  printf("\n Enter the float value");
  scanf("%f",&floata);
  
  printf("\n Enter the unsigned int value");
  scanf("%u",&uia);
  
  printf("\n Enter the unsigned long int value");
  scanf("%lu",&ulonga);
  
  printf("\n Enter the double value");
  scanf("%lf",&db);

  printf("\n long int vlaue =%ld \t char value =%c \n float value =%f \t unsigned int value= %u \n unsigned long int vlaue =%lu \t double value=%lf",longa,chara,floata,uia,ulonga,db)
}

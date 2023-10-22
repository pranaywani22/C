/*
Author:- Pranay Ajitkumar Wani
This program is designed in C programming language to make a report card for the mid sem of the first sem of vesit btech fe group b students
*/
#include<stdio.h>
#include<string.h>
int pointer(float a);
char grade( float b);
void main()
{
    int maths,pcc,bio,cp,chem,totalscore,mathsptr,pccptr,bioptr,cpptr,chemptr,overallptr;
    char name[10],sirname[10],mathsgrd,pccgrd,biogrd,cpgrd,chemgrd,Overallgrade;
    float mathsper,pccper,bioper,cpper,chemper;
    printf("\n Enter your name ");
    scanf("%s",name);
    printf("\n Enter your sirname ");
    scanf("%s",sirname);
    maths:
    printf("\n Enter your score of mid term in maths \t");
    scanf("%d",&maths);
    if(maths>20 &&maths<0)
    {
        printf("\n Enter your correct marks");
        goto maths;
    }
    pcc:
    printf("\n Enter your score of mid term in Programming Core Course \t");
    scanf("%d",&pcc);
    if(pcc>20 && pcc<0)
     {
        printf("\n Enter your correct marks");
        goto pcc;
    }
    bio:
    printf("\n Enter your score of mid term in Biology \t");
    scanf("%d",&bio);
    if(bio>20 &&bio<0)
     {
        printf("\n Enter your correct marks");
        goto bio;
    }
    cp:
    printf("\n Enter your score of mid term in C Programming \t");
    scanf("%d",&cp);
    if(cp>20 &&cp<0)
     {
        printf("\n Enter your correct marks");
        goto cp;
    }
    chem:
    printf("\n Enter your score of mid term in Chemistry \t");
    scanf("%d",&chem);
    if(chem>20 &&chem<0)
     {
        printf("\n Enter your correct marks");
        goto chem;
    }
    mathsper=maths*5;
    pccper=pcc*5;
    bioper=bio*5;
    cpper=cp*5;
    chemper=chem*5;
    totalscore=maths+pcc+bio+cp+chem;
    mathsptr=pointer(mathsper);
    cpptr=pointer(cpper);
    bioptr=pointer(bioper);
    pccptr=pointer(pccper);
    chemptr=pointer(chemper);
    overallptr=pointer(totalscore);
    mathsgrd=grade(mathsper);
    cpgrd=grade(cpper);
    biogrd=grade(bioper);
    pccgrd=grade(pccper);
    chemgrd=grade(chemper);
    Overallgrade=grade(totalscore);

    printf("\n--------------------------------------------------------");
    printf("\n%s %s",name,sirname);
    printf("\nSubject    | Marks(of 20) | per-age | pointer | grade  ");
    printf("\nMDC        |     %d       |    %.2f   |    %d   |   %c   ",maths,mathsper,mathsptr,mathsgrd);
    printf("\nPCC        |     %d       |    %.2f   |    %d   |   %c   ",pcc,pccper,pccptr,pccgrd);
    printf("\nC Program..|     %d       |    %.2f   |    %d   |   %c   ",cp,cpper,cpptr,cpgrd);
    printf("\nBiology    |     %d       |    %.2f   |    %d   |   %c   ",bio,bioper,bioptr,biogrd);
    printf("\nChemistry  |     %d       |    %.2f   |    %d   |   %c   ",chem,chemper,chemptr,chemgrd);
    printf("\n--------------------------------------------------------");
    printf("\n Overall pointer %.2f",overallptr);
    printf("\n Grade %c",Overallgrade);
}
int pointer(float a){
    if(a<100 && a>=80)
    return (10);
    else if (a>70 && a<79.99)
    return(9);
    else if (a>60 && a<69.99)
    return(8);
    else if (a>55 && a<59.99)
    return(7);
    else if (a>50 && a<54.99)
    return(6);
    else if (a>45 && a<49.99)
    return(5);
    else if (a>40 && a<44.99)
    return(4);
    else if (a<40)
    return(0);
}
char grade(float b){
     if(b<100 && b>=80)
    return ('O');
    else if (b>70 && b<79.99)
    return ('A');
    else if (b>60 && b<69.99)
    return('B');
    else if (b>55 && b<59.99)
    return('C');
    else if (b>50 && b<54.99)
    return('D');
    else if (b>45 && b<49.99)
    return('E');
    else if (b>40 && b<44.99)
    return('P');
    else if (b<40)
    return('F');
}

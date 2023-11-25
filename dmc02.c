#include<stdio.h>
#include<stdlib.h>
int main(){
    float *ptr;
    int n,i;
    printf("\n Enter the number of elements u want the storage for:- ");
    scanf("%d",&n);
    ptr= (float*)malloc(n*sizeof(float));
    for(i=0;i<n;i++){
        printf("\n Enter %d float element ",i+1);
        scanf("%f",&ptr[i]);
    }
    for(i=0;i<n;i++){
        printf("\n Elemnt entered on %d is %f",i+1,ptr[i]);
    }
    return 0;
}
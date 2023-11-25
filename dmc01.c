#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    printf("\n Enter the number of elements :-");
    scanf("%d",&n);
    int* ptr;
    ptr = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("\n Enter the value of Element %d :-",i+1);
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<n;i++){
        printf("\n The number on the element %d is %d",i+1,ptr[i]);
    }
printf("Enter a new value of element");
scanf("%d",&n);
 
ptr=(int*)realloc(ptr,n*sizeof(int));
for(i=0;i<n;i++){
        printf("\n Enter the value of Element %d :-",i+1);
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<n;i++){
        printf("\n The number on the element %d is %d",i+1,ptr[i]);
    }
    free(ptr);
    return 0;
}
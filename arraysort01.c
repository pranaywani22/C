#include<stdio.h>
int main(){

int i,n,temp,swapped;
printf("\n Enter the number of elements in the array");
scanf("%d",&n);
int arr[n];
printf("\n Enter the elements in the array");
for(i=0;i<n;i++){
    printf("\n Enter the value of element %d ",i+1);
    scanf("%d",&arr[i]);
}
do{
for(i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        swapped=1;
    }
}
}while(swapped ==1);
printf("\n Sorted Array is");
for(i=0;i<n;i++){
    printf("\n %d",arr[i]);
}
return 0;
}
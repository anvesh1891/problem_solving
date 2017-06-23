#include "functions.h"
void swap(int *a,int *b)
{
int temp=*a;
*a=*b;
*b=temp;
}
static int partition(int arr[],int i,int j){
int p=arr[i];//Take pivot as first element
int k,m=i;
for(k=i+1;k<=j;k++){
if(arr[k]<=p)
{
m++;
swap(&arr[k],&arr[m]);
}
}
swap(&arr[i],&arr[m]);
return m;
}

void quicksort(int arr[],int i,int j){

if(i<j)
{
        int pivot=partition(arr,i,j);
        quicksort(arr,i,pivot-1);
        quicksort(arr,pivot+1,j);
}
}
void display(int arr[],int n){
int i;
printf("\nThe array is ");
for(i=0;i<n;i++)
printf("%d ",arr[i]);
printf("\n");
}


#include<stdio.h>
#include "functions.h"
#define MAX_INT 999999
static void removeDuplicates(int arr[],int n){
int i,j;
//Complexity n^2
for(i=0;i<n;i++){
if(arr[i] != MAX_INT){
for(j=i+1;j<n;j++){
if(arr[i]==arr[j]){
arr[j]=MAX_INT;
	}
      }	
    }
}
printf("after removing duplicates \n");
for(i=0;i<n;i++){
if(arr[i] != MAX_INT){
printf("%d ",arr[i]);
}
}
printf("\n");
}
static void removeDuplicates2(int arr[],int n){
//Complexity : nlogn+n==nlogn

int j=0,i;
for(i=j+1;i<n;i++){
if(arr[i]==arr[j])
{
arr[i]=MAX_INT;
}
else
j=i;
}

printf("after removing duplicates \n");
for(i=0;i<n;i++){
if(arr[i] != MAX_INT){
printf("%d ",arr[i]);
}
}
printf("\n");

}
int main()
{
int arr[100];
int i,n;
printf("Enter size of array \n");
scanf("%d",&n);
printf("Enter array of elements\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
//removeDuplicates(arr,n);
quicksort(arr,0,n-1);
display(arr,n);
removeDuplicates(arr,n);
return 0;
}


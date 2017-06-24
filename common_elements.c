#include "functions.h"
static void common_elements(int arr1[],int n1,int arr2[],int n2){
quicksort(arr1,0,n1-1);
quicksort(arr2,0,n2-1);
display(arr1,n1);
display(arr2,n2);
int i=0,j=0,count=0;
while(i<n1&&j<n2){
if(arr1[i]==arr2[j])
{
	printf("%d ",arr1[i]);
	i++;
	j++;
	count++;
}
else if(arr1[i]<arr2[j])
i++;
else
j++;
}
printf("\nNo of common elements are %d\n",count);
}
int main()
{
int arr1[100],arr2[100],n1,n2;
printf("Enter the sizes of 2 arrays \n");
scanf("%d%d",&n1,&n2);
readArray(arr1,n1);
readArray(arr2,n2);
common_elements(arr1,n1,arr2,n2);
return 0;
}


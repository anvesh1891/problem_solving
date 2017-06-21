#include<stdio.h>
#include<string.h>
int main()
{
char ch[100];
scanf("%s",ch);
int n=strlen(ch);
int len;
int i,j,k;
for(len=1;len<=n;len++)// for strings of different lengths
	for(i=0;i<=n-len;i++)// endpoint
	{ 
		j=i+len-1;// end point of substring based on length
		for(k=i;k<=j;k++)
			printf("%c",ch[k]);
		printf("\n");
	}
 

return 0;
}

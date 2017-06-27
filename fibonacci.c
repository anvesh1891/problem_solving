#include "functions.h"
//Complexity T(n-1)+T(n-2)
static int gen_fib(long long n){
if(n==0 || n==1)
	return n;
return (gen_fib(n-1)+gen_fib(n-2));
}

//complexity O(n) Space n
static int gen_fib_2(long long n)
{
long long f[n+1];
int i;
f[0]=0;
f[1]=1;
for(i=2;i<=n;i++)
f[i]=f[i-1]+f[i-2];

return f[n];
}
//complexity O(n) space 1
static int gen_fib_3(long long n)
{
int i;
long long a=0;
long long b=1;
long long c=1;
if(n==0)
	return a;

for(i=2;i<=n;i++)
{
	c=a+b;
	a=b;
	b=c;
}
return c;
}

int main()
{
int i,n;
printf("Enter how many fibs \n");
scanf("%d",&n);
for(i=0;i<n;i++)
	printf("%d ",gen_fib_3(i));
printf("\n");
return 0;
}

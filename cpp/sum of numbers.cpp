#include<stdio.h>
int sum=0;
int add(int n)
{
	int rem;
	if(n==0)
	return sum;
	else
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
		add(n);
		
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",add(n));
	return 0;
}


#include<stdio.h>
#include<conio.h>
int main()
{
	int sum=0,n,rem;
	printf("enter the number :\n");
	scanf("%d",&n);
while(n!=0)
{
	rem=n%10;
	sum=sum+rem;
	n=n/10;
}
printf("%d",sum);
}

#include <stdio.h>
int main()
{
	int a[50],n,i,j,temp;
	printf ("Enter The element You want to Sort: ");
	scanf("%d",&n);
	printf("\nElements are: ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	// for (i=0;i<n-1;i++)
	// {
	// 	for (j=0;j<n-1-i;j++)
	// 	{
	// 		if (a[j]>a[j+1])
	// 		{
	// 		temp=a[j];
	// 		a[j]=a[j+1];
	// 		a[j+1]=temp;
	// 	    }
	// 	}
	// }

				// OR

	
	printf("\nSorting Elements are: ");
	for (i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}


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
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (a[i]>a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		    }
		}
	}

	
	printf("\nSorting Elements are: ");
	for (i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}


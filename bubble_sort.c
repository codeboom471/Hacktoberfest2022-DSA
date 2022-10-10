#include <stdio.h>
void sort(int a[], int n) 
{
int i,j,temp;
  for (i = 0; i < n; i++)
  {
  	for (j=i+1;j<n;j++)
  	{
  		if(a[i]>a[j])
  		{
  			temp=a[i];
  			a[i]=a[j];
  			a[j]=temp;
		  }
	  }
  }
  printf("sorted array\n:");
    for(i=0;i<n;i++)
    {
    printf("%d\n",a[i]);
	}
}
int main()
{
	int a[20],n,i;
	printf("enter the range:\n");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	sort(a,n);
	return 0;
}

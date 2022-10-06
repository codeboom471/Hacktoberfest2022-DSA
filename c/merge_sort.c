#include<stdio.h>
int merge(int a[],int start,int mid,int end);
int divide(int a[],int start,int end)
{
    if(start<end)
    {
        int mid;
        mid=(start+end)/2;
        divide(a,start,mid);
        divide(a,mid+1,end);
        merge(a,start,mid,end);
    }
}
int merge(int a[],int start,int mid,int end)
{
    int n1,n2,i,j;
    n1=mid-start+1;
    n2=end-mid;
    int a1[n1],a2[n2];
    for(i=0;i<n1;i++)
    {
        a1[i]=a[start+i];
    }
    for(j=0;j<n2;j++)
    {
        a2[j]=a[mid+1+j];
    }
    i=0,j=0;
    int k=start;
    while(i<n1 && j<n2)
    {
        if(a1[i]<=a2[j])
        {
            a[k]=a1[i];
            i++;
        }
        else
        {
            a[k]=a2[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=a1[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=a2[j];
        j++;
        k++;
    }
}
int print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int n,i,a[10000];
    printf("enter the numbers:");
    scanf("%d",&n);
    printf("enter the numkbers which will be sorted:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    divide(a,0,n-1);
    print(a,n);
    return 0;
}


#include <stdio.h>
void arraypoint (int *A, int n)
{
    int i;
    for (i=0; i < n; i++)
    {
        printf ("%d ",A[i]);
    }
    printf ("\n");
}
void insertionsort (int *A,int n)
{
    int key,i,j;
    for (i=1;i<=n-1;i++)
    {
        key=A[i];
        j=i-1;
        while (j>=0 && A[j]>key)
        {
           A[j+1]=A[j];
           j--;
        }
        A[j+1]=key;
    }
}
int main()
{
    int A[]= {4,13,6,34,10};
    int n=5;
    arraypoint(A,n);
    insertionsort(A,n);
     arraypoint(A,n);
    return 0;
}
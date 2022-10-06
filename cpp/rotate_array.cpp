#include<bits/stdc++.h>
using namespace std;
void rotate(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        swap(a[i],a[n-1]);
    }
}
int main()
{
    int arr[100],n;
    cout<<"enter the n: ";
    cin>>n;
    cout<<"enter the array number: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rotate(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" "
    }
    return 0;
}

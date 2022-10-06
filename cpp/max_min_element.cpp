#include<bits/stdc++.h>
using namespace std;
int min(int arr[],int n)
{
    int res = arr[0];
    for(int i=0;i<n;i++)
    {
        res= min(res,arr[i]);
    }
    return res;
}
int max(int arr[],int n)
{
    int res = arr[0];
    for(int i=0;i<n;i++)
    {
        res= max(res,arr[i]);
    }
    return res;
}
int main()
{
    int arr[] = {12, 3, 5, 7, 19};
    int n = sizeof(arr)/(sizeof(arr[0]));
    cout<<"max no: "<<max(arr,n)<<endl;
    cout<<"min no: "<<min(arr,n)<<endl;
    return 0;
}
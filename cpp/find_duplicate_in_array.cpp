#include<bits/stdc++.h>
using namespace std;
int findduplicate(int arr[],int nums)
{
    sort(arr,arr+nums);
        for(int i=0;i<nums;i++)
        {
            if(arr[i]==arr[i+1])
            {
                return  arr[i];
            }
        }
        return -1;
}
int main()
{
    int n,arr[100];
    cout<<"enter the number of n :";
    cin>>n;
    cout<<"enter all the numbers: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"duplicate: "<<findduplicate(arr,n)<<" ";
    return 0;
}
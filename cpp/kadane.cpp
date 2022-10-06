#include<bits/stdc++.h>
using namespace std;
long long maxSubarraySum(int arr[], int n)
{ 
    long max = arr[0];
    long sum = arr[0];
    for( int i = 1 ; i < n ; i++ )
    {
        sum = sum + arr[i];
        if(sum > max)
        {
            max = sum;
        }
        if(sum < arr[i])
        {
            sum = arr[i];
        }
        if( max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int n,a[100];
    cout<<"enter the number: ";
    cin>>n;
    cout<<"enter the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout << maxSubarraySum(a, n) << endl;
    return 0;
}
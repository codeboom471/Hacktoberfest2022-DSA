#include<bits/stdio.h>
using namespace std;
int kthSmallest(int arr[],int n,int k)
{
    sort(arr,arr+n);
    return arr[k-1];
}
int main()
{
    int arr[] = {12, 3, 5, 7, 19};
    int n = sizeof(arr)/(sizeof(arr[0]));
    int k;
    cout<<"enter the kth value: " ;
    cin>>k;
    cout<<"K'th smallest element is: "<< kthSmallest(arr,n,k);
    return 0;
}

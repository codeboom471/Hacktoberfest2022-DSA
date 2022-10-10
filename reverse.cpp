#include<bits/stdc++.h>
using namespace std;
void reverseArray(int a[],int start , int end)
{
    while(start<end)
    {
        swap(a[start],a[end]);
        start++;
        end--;
    }
}
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<< a[i] << " ";
    }
        cout<<endl;
}
int main()
{
//    int arr[] = {2,99,5,6,9,75,3};
//    int n = sizeof(arr)/(sizeof(arr[0]));
      int arr[20],n,i;
      cout<<"enter the range:\n";
      cin>>n;
      cout<<"enter the elements in the array:\n";
      for(i=0;i<n;i++)
      cin>>arr[i];
//    cout<<" reverse: ";
    print(arr,n);
    reverseArray(arr,0,n-1);
    cout<<"after reverse: ";
    print(arr,n);
    return 0;
}

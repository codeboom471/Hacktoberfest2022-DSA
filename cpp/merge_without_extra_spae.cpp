#include <bits/stdc++.h>
using namespace std;
void merge(int arr1[], int arr2[], int n, int m); 
void merge(int arr1[], int arr2[], int n, int m) 
{
        int i=n-1,j=0;
        while(i>=0 && j<m)  //i cholbe pichon theke arr1[]            //j cholbe samne theke arr2[]
        {
            if(arr1[i]>=arr2[j])
            {
                swap(arr1[i],arr2[j]);
                i--;
                j++;
            }
            else
            {
                break;
            }
        }
        sort(arr1,arr1+n);
        sort(arr2,arr2+m);
    }
int main() 
{
    int n, m, i;
    cout<<"entr the value of n,m: ";
    cin >> n >> m;
    int arr1[n], arr2[m];
    cout<<"enter the value of arr1: ";
    for (i = 0; i < n; i++) 
    {
        cin >> arr1[i];
    }
    cout<<"enter the value of arr2: ";
    for (i = 0; i < m; i++) 
    {
        cin >> arr2[i];
    }
    merge(arr1, arr2, n, m);
    cout<<"value of arr: ";
    for (i = 0; i < n; i++) 
    {
        cout << arr1[i] << " ";
    }
    for (i = 0; i < m; i++) 
    {
        cout << arr2[i] << " ";
    }
    return 0;   
}

#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    int maxLen(vector<int>&a, int n)
    {   
        // Your code here
        map<int,int> mp;
        int len=0;
        int sum=0;
        for(int i=0;i<n;i++)
        {
          sum+=a[i];
          if(sum==0)
          len=max(len,i+1);
          if(mp.find(sum)!=mp.end())
          {
              len=max(len,i-mp[sum]);
          }
          else
          mp[sum]=i;
            
        }
        return len;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}
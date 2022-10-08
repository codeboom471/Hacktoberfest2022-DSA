#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& interval)
    {
     sort(interval.begin(),interval.end()); 
        vector<vector<int>> ans;
     auto curr=interval[0];
        int i=-1;
        while(++i<interval.size())
        {
            if(curr[1]>=interval[i][0])
                curr[1]=max(curr[1],interval[i][1]);
            else
            { ans.push_back(curr);
               curr=interval[i];}
        }
        ans.push_back(curr);
        return ans;
    }
};

#include<unordered_map>
#include<vector>
#include<stack>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        stack<int> s;
        int n = nums2.size();
        
        for(int i = n-1; i>=0; i--){
            int element = nums2[i];
            while(!s.empty() && s.top() <= element){
                s.pop();
            }
            int res = (s.empty()) ? -1 : s.top();
            //insert into map
            m.insert({element,res});
            s.push(element);
        }
        
        vector<int> ans;
        //num1 ki value ko push krdo ans mai
        for(auto x: nums1){
            ans.push_back(m[x]);
        }
        return ans;
    }
};
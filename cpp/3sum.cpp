3Sum

Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

 

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Example 2:

Input: nums = []
Output: []
Example 3:

Input: nums = [0]
Output: []


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector< vector<int>> ans;
     if (nums.empty()) {
		return ans;
	}
        sort(nums.begin(),nums.end());
        for(int i=0;i<=nums.size();i++)
        {
            int j=i+1,k=nums.size()-1;
            
            while(j<k)
            {
                int csum=nums[i];
                csum+=nums[j];
                csum+=nums[k];
                
                if(csum==0)
                {
                    ans.push_back({nums[i],nums[j],nums[k]});
                       while(j<k&& nums[j]==nums[j+1])j++;
                    while(j<k&& nums[k]==nums[k-1])k--;
                     
                    j++;
                    k--;
                }
                else if(csum>0)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
            // unique element
            while(i+1<nums.size()&&nums[i+1]==nums[i])
            {
                i++;
            }
            
        }
        return ans;
    }
};

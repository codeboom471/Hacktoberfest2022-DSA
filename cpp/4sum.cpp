4Sum

Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

0 <= a, b, c, d < n
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target
You may return the answer in any order.

 

Example 1:

Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
Example 2:

Input: nums = [2,2,2,2,2], target = 8
Output: [[2,2,2,2]]
 

Constraints:

1 <= nums.length <= 200
-109 <= nums[i] <= 109
-109 <= target <= 109

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        long long int i,j,h,l;
        
        sort(nums.begin(),nums.end());
        if(nums.size()<4)
        {
            return ans;
        }
        for(i=0;i<nums.size()-3;i++)
        {
            // while(nums[i+1]==nums[i]&&i+2<nums.size())
            // {
            //     i++;
            // }
               if(i > 0 && nums[i] == nums[i - 1]){
                continue;
            }
            for(j=i+1;j<nums.size()-2;j++)
            {
                
//                 while(j+3<nums.size()&&nums[j+1]==nums[j])
//                 {
//                     j++;
//                 }
                 if(j > i + 1 && nums[j] == nums[j - 1]){
                    continue;
                }
                 l=j+1;
                     h=nums.size()-1;
         long long int sum=target-(nums[i]+nums[j])*1L;// overflow bachhane ke karan use kiya
                
                while(l<h)
                {
                    if(nums[l]+nums[h]==sum)
                    {
                        ans.push_back({nums[i],nums[j],nums[l],nums[h]});
                        
                        while(l<h &&nums[l+1]==nums[l]){
                            l++;
                        }
                        while(l<h && nums[h-1]==nums[h]) 
                        {
                            h--;
                        }
                        l++;
                        h--;
                    }
                    else if(nums[l]+nums[h]>sum)
                    {
                        h--;
                    }
                    else
                    {
                        l++;
                    }
                }
            }
        }
        return ans;
    }

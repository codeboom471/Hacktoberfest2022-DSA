////The problem description :
//https://leetcode.com/problems/gray-code/description/
//Solution

class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> result;
        result.push_back(0);
        // or-ing with mask 2^(i-1)
        for (int i = 1; i <= n; i++) {
            int len = result.size();
            int mask = 1 << (i - 1);
            for (int j = len - 1; j >= 0; j--) {
                result.push_back(mask + result[j]);
            }
        }
        return result;
    }
};
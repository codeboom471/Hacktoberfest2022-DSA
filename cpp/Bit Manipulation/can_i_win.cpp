//The problem description :
//https://leetcode.com/problems/can-i-win/description/
//Solution

class Solution {
public:

    int m,t;
    vector<int> dp;
    bool game(int mask, int score){
        if(dp[mask]!=-1) return dp[mask];
        for(int i=0;i<m;i++)
        {
            int cmask = 1<<i;
            if( (mask&cmask) == 0 )
                    if(score+i+1 >= t or game((mask|cmask),score+i+1)==false ) return dp[mask]=1;
        }
        return dp[mask]=0;
    }
    bool canIWin(int maxChoosableInteger, int desiredTotal){
        m=maxChoosableInteger;
        t=desiredTotal;
        if((m*(m+1))/2 < t) return false;
        dp.resize(1<<m,-1);
        return game(0,0);
    }
};
    int climbStairs(int n) {
        int dp[46]={0};
        
        dp[0]=1;
        dp[1]=1;
        if(n<3) return n;
        for(int i=2; i<=n; i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }

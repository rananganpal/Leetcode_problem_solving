class Solution {
public:
    int minSteps(int n) {
        if (n==1) return 0;
        if (n==2) return 2;
        vector<int>dp(n+1);
        dp[1]=0;
        for (int i=2;i<=n;i++) dp[i]=i;
        for (int val=2;val<=n;val++){
            for (int j=2;j<=val/2;j++){
                if (val%j!=0) continue;
                dp[val]=min(dp[val],dp[j]+val/j);
            }
        }
        return dp[n];
    }
};
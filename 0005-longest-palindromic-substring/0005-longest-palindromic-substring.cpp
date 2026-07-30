class Solution {
public:
    string longestPalindrome(string s) {
         int n=s.size();
        string rev=s;
        reverse(rev.begin(),rev.end());
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        int maxLen=0;
        int endIndex=0;
        for (int i=1;i<=n;i++) {
            for (int j=1;j<=n;j++) {
                if (s[i-1]==rev[j-1]) {
                    dp[i][j]=dp[i-1][j-1]+1;
                    int len=dp[i][j];
                    int start1=i-len;
                    int start2=n-j;
                    if (start1==start2 && len>maxLen) {
                        maxLen=len;
                        endIndex=i-1;
                    }
                }
            }
        }
        return s.substr(endIndex-maxLen+1,maxLen);
    }
};
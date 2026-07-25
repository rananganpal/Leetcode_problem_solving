class Solution {
public:
  int findLCS(string s,string str){
    int n=s.length();
    vector<vector<int>>dp(n+1,vector<int>(n+1,0));
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (s[j-1]==str[i-1]) dp[i][j]=dp[i-1][j-1]+1;
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[n][n];
  }
    int minInsertions(string s) {
        string str=s;
        reverse(str.begin(),str.end());
        return s.length()-findLCS(s,str);
    }
};
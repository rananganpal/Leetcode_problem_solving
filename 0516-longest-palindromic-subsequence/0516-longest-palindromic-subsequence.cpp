class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string rev_s=s;
        reverse(rev_s.begin(),rev_s.end());
        int n=s.length();
        vector<vector<int>>lps(n+1,vector<int>(n+1,0));
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                if (s[i-1]==rev_s[j-1]) lps[i][j]=lps[i-1][j-1]+1;
                else lps[i][j]=max(lps[i-1][j],lps[i][j-1]);
            }
        }
        return lps[n][n];
    }
};
class Solution {
public:
    int minDistance(string word1, string word2) {
        int m=word1.length(),n=word2.length();
      vector<vector<int>> matrix(n+1, vector<int>(m+1));
        for (int i=0;i<=n;i++) matrix[i][0]=i;
        for (int j=0;j<=m;j++) matrix[0][j]=j;
        for (int i=1;i<=n;i++){
            for (int j=1;j<=m;j++){
                if (word2[i-1]==word1[j-1]) matrix[i][j]=matrix[i-1][j-1];
                else matrix[i][j]=1+min(matrix[i-1][j],matrix[i][j-1]);
            }
        }
        return matrix[n][m];
    }
};
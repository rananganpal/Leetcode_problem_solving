class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
     vector<vector<int>>grid(matrix.size(),vector<int>(matrix.size(),INT_MAX));
     for (int i=0;i<n;i++) grid[0][i]=matrix[0][i];
     for (int i=0;i<n-1;i++){
        for (int j=0;j<n;j++){
            if (j-1>=0) grid[i+1][j-1]=min(grid[i+1][j-1],grid[i][j]+matrix[i+1][j-1]);
            grid[i+1][j]=min(grid[i+1][j],grid[i][j]+matrix[i+1][j]);
           if (j+1<n) grid[i+1][j+1]=min(grid[i+1][j+1],grid[i][j]+matrix[i+1][j+1]);
        }
     }
      int mini=INT_MAX;
      for (int i=0;i<n;i++) mini=min(mini,grid[n-1][i]);
      return mini;
    }
};
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>>vec(m, vector<int>(n,0));
        queue<pair<int,int>>q;
        int count=0;
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
              if (grid[i][j]=='0') continue;
              if (grid[i][j]=='1' && vec[i][j]==1) continue;
              q.push({i,j});
              vec[i][j]=1;
              while (!q.empty()){
                int size=q.size();
                int row=q.front().first,col=q.front().second;
                q.pop();
                for (int p=0;p<size;p++){
                  if (row-1>=0 && grid[row-1][col]=='1' && vec[row-1][col]==0){
                    q.push({row-1,col});  vec[row-1][col]=1;
                  }
                  if (row+1<m && grid[row+1][col]=='1' && vec[row+1][col]==0){
                    q.push({row+1,col});  vec[row+1][col]=1;
                  }
                  if (col-1>=0 && grid[row][col-1]=='1' && vec[row][col-1]==0){
                    q.push({row,col-1});  vec[row][col-1]=1;
                  }
                  if (col+1<n && grid[row][col+1]=='1' && vec[row][col+1]==0){
                    q.push({row,col+1});  vec[row][col+1]=1;
                  }
                }
              }
              count++;
            }
        }
        return count;
    }
};
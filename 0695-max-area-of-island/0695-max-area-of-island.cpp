class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxi=0,m=grid.size(),n=grid[0].size();
       vector<vector<int>> vec(m, vector<int>(n, -1));
        queue<pair<int,int>>q;
       for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
             if (grid[i][j]==0 || vec[i][j]==1) continue;
             int count=0;
              q.push({i,j});
              count++;  vec[i][j]=1;
              while(!q.empty()){
                int row=q.front().first,col=q.front().second;
                q.pop();
                if (row-1>=0 && grid[row-1][col]==1 && vec[row-1][col]==-1){
                    q.push({row-1,col});  vec[row-1][col]=1;  count++;
                } if (row+1<m && grid[row+1][col]==1 && vec[row+1][col]==-1){
                    q.push({row+1,col});  vec[row+1][col]=1;  count+=1;
                } if (col-1>=0 && grid[row][col-1]==1 && vec[row][col-1]==-1){
                    count++;  vec[row][col-1]=1;  q.push({row,col-1});
                } if (col+1<n && grid[row][col+1]==1 && vec[row][col+1]==-1){
                    count++;   q.push({row,col+1});  vec[row][col+1]=1;
                }
              }
              maxi=max(maxi,count);
         }
       }
       return maxi;
    }
};
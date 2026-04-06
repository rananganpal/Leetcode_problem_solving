class Solution {
public:
    int findMaxFish(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>>vec(m,vector<int>(n,-1));
        queue<pair<int,int>>q;
        int maxi=0;
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                if (grid[i][j]==0 || vec[i][j]==1) continue;
                else {
                   long long total=0;
                   q.push({i,j});
                   vec[i][j]=1;
                   total+=grid[i][j];
                   while (!q.empty()){
                     int row=q.front().first,col=q.front().second,size=q.size();
                     q.pop();
                     for (int k=0;k<size;k++){
                       if (row-1>=0 && grid[row-1][col]>0 && vec[row-1][col]==-1){
                         vec[row-1][col]=1;  q.push({row-1,col}); total+=grid[row-1][col];
                       } if (row+1<m && grid[row+1][col]>0 && vec[row+1][col]==-1){
                         vec[row+1][col]=1;  q.push({row+1,col});  total+=grid[row+1][col];
                       } if (col-1>=0 && grid[row][col-1]>0 && vec[row][col-1]==-1){
                         vec[row][col-1]=1;  q.push({row,col-1});  total+=grid[row][col-1];
                       } if (col+1<n && grid[row][col+1]>0 && vec[row][col+1]==-1){
                         vec[row][col+1]=1;  q.push({row,col+1});  total+=grid[row][col+1];
                       }
                     }
                   }
                   maxi=max(maxi,(int)total);
                }
            }
        }
        return maxi;
    }
};
class Solution {
public:
    int sr,sc,totalCells=0,ans=0;
    void dfs(vector<vector<int>>& grid,int r,int c,int visited){
        int m=grid.size(),n=grid[0].size();
        if(r<0||r>=m||c<0||c>=n||grid[r][c]==-1)
            return;
        if(grid[r][c]==2){
            if(visited==totalCells)
                ans++;
            return;
        }
        int temp=grid[r][c];
        grid[r][c]=-1;
        dfs(grid,r+1,c,visited+1);
        dfs(grid,r-1,c,visited+1);
        dfs(grid,r,c+1,visited+1);
        dfs(grid,r,c-1,visited+1);
        grid[r][c]=temp;
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!=-1) totalCells++;
                if(grid[i][j]==1){
                    sr=i;
                    sc=j;
                }
            }
        }
        dfs(grid,sr,sc,1);
        return ans;
    }
};
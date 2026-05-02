class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count_allone=0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(grid[i][j]==1) count_allone++;
            }
        }
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(i==0 || j==0 || i==n-1 || j==m-1) {
                    if(grid[i][j]==1) {
                        q.push({i,j});
                        grid[i][j]=0; 
                    }
                }
            }
        }
        int count_walk=0;
        int dx[4]={-1,1,0,0};
        int dy[4]={0,0,-1,1};
        while(!q.empty()) {
            auto it=q.front();
            q.pop();
            int x=it.first;
            int y=it.second;
            count_walk++;
            for(int k=0; k<4;k++) {
                int nx=x+dx[k];
                int ny=y+dy[k];
                if(nx>=0 && ny>=0 && nx<n && ny<m && grid[nx][ny]==1) {
                    q.push({nx,ny});
                    grid[nx][ny]=0;
                }
            }
        }
        return count_allone-count_walk;
    }
};
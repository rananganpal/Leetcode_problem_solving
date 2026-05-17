class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
            int n=grid.size();
        if (grid[0][0]==1 || grid[n-1][n-1]==1)
            return -1;
        vector<pair<int,int>> dirs={
            {-1,-1},{-1,0},{-1,1},
            {0,-1},{0,1},
            {1,-1},{1,0},{1,1}
        };
        queue<pair<int,int>>q;
        q.push({0, 0});
        grid[0][0]=1;
        int pathLength=1;
        while (!q.empty()) {
            int sz=q.size();
            while (sz--) {
                auto [x, y]=q.front();
                q.pop();
                if (x==n-1 && y==n-1)
                    return pathLength;
                for (auto &[dx, dy]:dirs) {
                    int nx=x+dx;
                    int ny=y+dy;
                    if (nx>=0 && ny>=0 &&
                        nx<n && ny<n &&
                        grid[nx][ny]==0) {
                        grid[nx][ny]=1;
                        q.push({nx,ny});
                    }
                }
            }
            pathLength++;
        }
        return -1;
    }
};
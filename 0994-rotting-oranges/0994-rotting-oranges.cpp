class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
          bool hasFresh = false;
        for (int i=0;i<grid.size();i++){
            for (int j=0;j<grid[0].size();j++){
                if (grid[i][j]==2) q.push({i,j});
                if (grid[i][j]==1) hasFresh=true;
            }
        }
        if (!hasFresh) return 0;
        int time=-1;
        while (!q.empty()){
            int size=q.size();
            for (int i=0;i<size;i++){
                int row=q.front().first,col=q.front().second;
                q.pop();
                if (row-1>=0 && grid[row-1][col]==1){
                    q.push({row-1,col});  grid[row-1][col]=2;
                }
                if (row+1<grid.size() && grid[row+1][col]==1){
                    q.push({row+1,col});  grid[row+1][col]=2;
                }
                if (col-1>=0 && grid[row][col-1]==1){
                    q.push({row,col-1});  grid[row][col-1]=2;
                }
                if (col+1<grid[0].size() && grid[row][col+1]==1){
                    q.push({row,col+1});  grid[row][col+1]=2;
                }
            }
            time++;
        }
        bool flag=true;
        for (int i=0;i<grid.size();i++){
            for (int j=0;j<grid[0].size();j++){
                if (grid[i][j]==1) {
                    flag=false;  break;
                }
            }
        }
        return flag==true?time:-1;
    }
};
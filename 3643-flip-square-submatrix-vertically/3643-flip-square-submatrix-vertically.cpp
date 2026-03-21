class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int low=x,high=x+k-1;
        while (low<high){
            for (int i=0;i<k;i+=1){
              swap(grid[low][i+y],grid[high][i+y]);
            }
            low++; high--;
        }
        return grid;
    }
};
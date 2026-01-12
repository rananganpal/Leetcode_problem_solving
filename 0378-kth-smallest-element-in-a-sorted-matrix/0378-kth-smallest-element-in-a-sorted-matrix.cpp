class Solution {
public:
   int count(vector<vector<int>>&matrix,int mid){
    int col=0,row=matrix.size()-1,c=0;
    while (row>=0 && col<matrix.size()){
        if (matrix[row][col]<=mid){
            c+=(row+1);
            col++;
        } else row--;
      }
      return c;
   }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        int low=matrix[0][0],high=matrix[n-1][n-1],ans=INT_MAX;
        while (low<=high){
            int mid=(low+high)/2;
            if (count(matrix,mid)>=k){
                ans=mid; high=mid-1;
            } else {
                low=mid+1;
            }
        }
        return ans;
    }
};
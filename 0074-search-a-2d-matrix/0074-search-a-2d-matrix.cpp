class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=1,high=matrix.size()*matrix[0].size();
        int m=matrix.size(),n=matrix[0].size();
        while (low<=high){
            int mid=(low+high)/2;
            int row=(mid-1)/n,col=(mid-1)%n;
            if (matrix[row][col]==target) return true;
            else if (matrix[row][col]>target) high=mid-1;
            else low=mid+1;
        }
        return false;
    }
};
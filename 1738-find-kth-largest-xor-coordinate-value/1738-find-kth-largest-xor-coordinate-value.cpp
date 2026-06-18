class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        int m=matrix.size();
        int n=matrix[0].size();
        for (int i=0;i<m;i++) {
            for (int j=0;j<n;j++) {
                if (i>0) matrix[i][j]^=matrix[i-1][j];
                if (j>0) matrix[i][j]^=matrix[i][j - 1];
                if (i>0 && j>0) matrix[i][j]^=matrix[i-1][j-1];
                pq.push(matrix[i][j]);
                if (pq.size()>k)
                    pq.pop();
            }
        }
        return pq.top();
    }
};
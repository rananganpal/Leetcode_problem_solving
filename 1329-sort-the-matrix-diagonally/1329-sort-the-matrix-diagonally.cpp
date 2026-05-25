class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        for (int i=m-1;i>=0;i--){
            vector<int>vec;
            int r=i,c=0,idx=0;
            while (r<m && c<n){
             vec.push_back(mat[r][c]);
             r++;  c++;
            }
            sort(vec.begin(),vec.end());
            r=i;  c=0;
            while (r<m && c<n){
                mat[r][c]=vec[idx++];
                r++;  c++;
            }
            vec.clear();
        }
        for (int i=1;i<n;i++){
          vector<int>vec;
            int r=0,c=i,idx=0;
            while (r<m && c<n){
             vec.push_back(mat[r][c]);
             r++;  c++;
            }
            sort(vec.begin(),vec.end());
            r=0;  c=i;
            while (r<m && c<n){
                mat[r][c]=vec[idx++];
                r++;  c++;
            }
            vec.clear();
        }
        return mat;
    }
};
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int>arr;
        vector<vector<int>>vec(mat.size()+mat[0].size()-1);
        for (int i=0;i<mat.size();i++){
            for (int j=0;j<mat[0].size();j++){
               vec[i+j].push_back(mat[i][j]);
            }
        }
        for (int i=0;i<(mat.size()+mat[0].size()-1);i++){
            if (i%2) arr.insert(arr.end(),vec[i].begin(),vec[i].end());
            else {
                int low=0,high=vec[i].size()-1;
                while (low<high){
                    swap(vec[i][low],vec[i][high]);
                    low++;  high--;
                }
                arr.insert(arr.end(),vec[i].begin(),vec[i].end());
            }
        }
        return arr;
    }
};
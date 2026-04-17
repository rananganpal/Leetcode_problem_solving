class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;
        int n=numRows;
        result.push_back({1});
        if (n==1) return result;
        for (int i=1;i<n;i++){
            vector<int>arr;
            arr.push_back(1);
            for (int j=0;j<result[i-1].size()-1;j++)  arr.push_back(result[i-1][j]+result[i-1][j+1]);
            arr.push_back(1);
            result.push_back(arr);
        }
        return result;
    }
};
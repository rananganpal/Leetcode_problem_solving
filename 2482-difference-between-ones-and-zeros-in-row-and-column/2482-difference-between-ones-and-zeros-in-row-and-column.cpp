class Solution {
public:
 struct PairHash {
    size_t operator()(const pair<int, int>& p) const {
        return hash<int>()(p.first) ^ (hash<int>()(p.second) << 1);
    }
};
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
         unordered_map<pair<int,int>,vector<int>,PairHash>mp;
         int m=grid.size(),n=grid[0].size();
         for (int i=0;i<m;i++){
            int sum=0;
            for (int j=0;j<n;j++) sum+=grid[i][j];
            for (int j=0;j<n;j++) mp[{i,j}].push_back(sum);
         }
         for (int j=0;j<n;j++){
            int sum=0;
            for (int i=0;i<m;i++) sum+=grid[i][j];
            for (int i=0;i<m;i++) mp[{i,j}].push_back(sum);
         }
        vector<vector<int>>vec(m,vector<int>(n));
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                int onesRow=mp[{i,j}][0],onesCol=mp[{i,j}][1];
                vec[i][j]=onesCol+onesRow-(m-onesRow)-(n-onesCol);
            }
        }
        return vec;
    }
};
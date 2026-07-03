class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>vec=grid[0];
        for (int i=1;i<n;i++){
            int min1=INT_MAX,min2=INT_MAX,index=-1;
            for (int j=0;j<n;j++){
                if (vec[j]<min1){
                    min2=min1;
                    min1=vec[j];
                    index=j;
                } else if (vec[j]<min2) min2=vec[j];
            }
            vector<int>arr(n);
            for (int j=0;j<n;j++){
                if (j==index) arr[j]=grid[i][j]+min2;
                else arr[j]=grid[i][j]+min1;
            }
            vec=arr;
        }
        return *min_element(vec.begin(),vec.end());
    }
};
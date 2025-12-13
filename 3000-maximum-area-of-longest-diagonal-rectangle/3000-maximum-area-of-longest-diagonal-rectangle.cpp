class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int k=0;
        int maxi= dimensions[0][0]*dimensions[0][0] + dimensions[0][1]*dimensions[0][1];
        for (int i=1;i<dimensions.size();i++){
            int length= dimensions[i][0]*dimensions[i][0] + dimensions[i][1]*dimensions[i][1];
            if (maxi<length){
                maxi=length;
                k=i;
            }
        }
        return dimensions[k][0]*dimensions[k][1];
    }
};
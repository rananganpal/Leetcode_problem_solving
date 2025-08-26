class Solution {
public:
    int findMiddleIndex(vector<int>& nums){
        int n=nums.size();
        for (int i=0;i<n;i++){
          int sum_right=0,sum_left=0;
          for (int j=i-1;j>=0;j--){
            sum_left+=nums[j];
          } 
          for (int k=i+1;k<n;k++){
            sum_right+=nums[k];
          }
           if (sum_left==sum_right){
            return i;
          }
        }
        return -1;
    }
};
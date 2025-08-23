class Solution {
public:
    int pivotIndex(vector<int>& nums){
      if (nums.size()==1){
        return 0;
      }
      for (int i=0;i<nums.size();i++){
        int left_sum=0,right_sum=0;
        for (int j=i-1;j>=0;j--){
            left_sum+=nums[j];
        }
        for (int j=i+1;j<nums.size();j++){
            right_sum+=nums[j];
        }
        if (right_sum==left_sum){
            return i;
        }
      }
      return -1;
    }
};
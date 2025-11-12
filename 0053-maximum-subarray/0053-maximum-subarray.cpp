class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxvalue=-100000,sum=0;
        for (int i=0;i<nums.size();i++){
          sum+=nums[i];
          if (sum>maxvalue){
            maxvalue=sum;
          }
          if (sum<0){
            sum=0;
          }
        }
        return maxvalue;
    }
};
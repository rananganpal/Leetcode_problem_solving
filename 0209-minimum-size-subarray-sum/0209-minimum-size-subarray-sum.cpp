class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      int prefixsum=0,left=0,n=nums.size(),ans=INT_MAX;
      for (int i=0;i<n;i++){
        prefixsum+=nums[i];
        while (prefixsum>=target){
            ans=min(ans,i-left+1);
            prefixsum-=nums[left];
            left+=1;
        }
      }
      return ans==INT_MAX?0:ans;
    }
};
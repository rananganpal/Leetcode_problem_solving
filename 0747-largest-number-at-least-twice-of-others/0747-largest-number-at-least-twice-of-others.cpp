class Solution {
public:
    int dominantIndex(vector<int>& nums) {
      auto m=max_element(nums.begin(),nums.end());
      int index=distance(nums.begin(),m);
      int a=nums[index];
      int i=index;
      nums[index]=-1;
      auto n=max_element(nums.begin(),nums.end());
        index=distance(nums.begin(),n);
        if (a>=nums[index]*2){
            return i;
        }
        return -1;
    }
};
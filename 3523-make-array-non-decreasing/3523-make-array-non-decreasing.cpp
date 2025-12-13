class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        if (is_sorted(nums.begin(),nums.end())) return nums.size();
        int count=0;
        vector<int>arr;
        for (int i=0;i<nums.size();i++){
          if (!arr.empty() && arr.back()>nums[i]){
            arr.back()=nums[i];
          } else {
            arr.push_back(nums[i]);
          }
        }
        return arr.size();
    }
};
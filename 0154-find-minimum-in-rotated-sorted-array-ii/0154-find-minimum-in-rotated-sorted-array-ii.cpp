class Solution {
public:
    int findMin(vector<int>& nums) {
        if (nums[0]<nums[nums.size()-1]){
            return nums[0];
        }
        sort(nums.begin(),nums.end());
        return nums[0];
    }
};
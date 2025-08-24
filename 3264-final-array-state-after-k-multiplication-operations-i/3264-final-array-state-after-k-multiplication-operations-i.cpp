class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for (int i=1;i<=k;i++){
             auto maxElementIt = min_element(nums.begin(), nums.end());
             int index = distance(nums.begin(), maxElementIt);
             nums[index]=nums[index]*multiplier;
        }
        return nums;
    }
};
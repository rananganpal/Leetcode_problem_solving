class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> result(nums.size());
        int value = 0;

        for (int i = 0; i < nums.size(); i++) {
            value = (value * 2 + nums[i]) % 5;
            result[i] = (value == 0);
        }

        return result;
    }
};
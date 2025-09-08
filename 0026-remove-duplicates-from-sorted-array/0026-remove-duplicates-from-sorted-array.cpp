class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int i = 0;  // slow pointer
        for (int j = 1; j < nums.size(); j++) {  // fast pointer
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};
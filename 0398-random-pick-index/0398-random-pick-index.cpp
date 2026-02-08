class Solution {
    private:
    vector<int> nums;
    mt19937 gen;
public:
    Solution(vector<int>& nums) : nums(nums) {
         random_device rd; // seed generator
        gen = mt19937(rd());
    }
    
    int pick(int target) {
          int count = 0;
        int chosenIndex = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                count++;
                uniform_int_distribution<int> dist(0, count - 1);
                if (dist(gen) == 0) { // choose current index with probability 1/count
                    chosenIndex = i;
                }
            }
        }

        return chosenIndex;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */
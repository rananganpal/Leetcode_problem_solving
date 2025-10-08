class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
      map<int, vector<int>> m;
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]].push_back(i);
        }
        for (auto& p : m) {
            auto& indices = p.second;
            if (indices.size() >= 2) {
                for (size_t j = 1; j < indices.size(); j++) {
                    if (indices[j] - indices[j - 1] <= k) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        if (nums[start]==target){
            return 0;
        }
        if (nums.size()==1){
            return 0;
        }
          int n = nums.size();
        int minDist = INT_MAX; 
        
        for (int i = 0; i < n; ++i) {
            if (nums[i] == target) {
                int dist = abs(i - start);
                if (dist < minDist) {
                    minDist = dist;
                }
            }
        }
        
        return minDist; 
    }
};
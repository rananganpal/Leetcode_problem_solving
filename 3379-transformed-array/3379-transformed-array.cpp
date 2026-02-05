class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
   int n = nums.size();
        vector<int>vec(n,0);
        for (int i=0;i<n;i++) {
            if (nums[i]==0) {
                vec[i]=0;
            } else {
                int idx=(i+nums[i])%n;
                if (idx < 0) idx+=n; 
                vec[i]=nums[idx];
            }
        }
        return vec;
      }
};
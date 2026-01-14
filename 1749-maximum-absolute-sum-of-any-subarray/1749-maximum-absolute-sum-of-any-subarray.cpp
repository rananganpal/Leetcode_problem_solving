class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxsum=0,minsum=0,maxi=0,mini=0;
        for (int i=0;i<nums.size();i++){
            maxi=max(maxi+nums[i],nums[i]);
            mini=min(mini+nums[i],nums[i]);
            maxsum=max(maxsum,maxi);
            minsum=min(minsum,mini);
        }
        return max(maxsum,-minsum);
    }
};
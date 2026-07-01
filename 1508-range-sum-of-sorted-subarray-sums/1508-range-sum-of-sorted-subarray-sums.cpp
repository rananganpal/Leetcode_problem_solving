class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        const int mod=1e9+7;
        vector<int>vec;
        for (int i=0;i<n;i++) {
            int cur=0;
            for (int j=i;j<n;j++) {
                cur+=nums[j];
                vec.push_back(cur);
            }
        }
        sort(vec.begin(),vec.end());
        long long ans=0;
        for (int i=left-1;i<=right-1;i++) {
            ans=(ans+vec[i])%mod;
        }
        return ans;
    }
};
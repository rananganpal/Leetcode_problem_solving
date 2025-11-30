class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
         long long total=0;
        for (int x : nums) total=(total + x)%p;
        if (total == 0) return 0;
        unordered_map<int, int>mp; 
        mp[0]=-1;
        long long prefix=0;
        int n=nums.size();
        int res=n;
        for (int i=0;i<n;i++) {
            prefix=(prefix+nums[i])%p;
            int target=(prefix-total+p)%p;
            if (mp.count(target)) {
                res=min(res,i-mp[target]);
            }
            mp[prefix]=i;
        }
        return res==n?-1:res;
    }
};
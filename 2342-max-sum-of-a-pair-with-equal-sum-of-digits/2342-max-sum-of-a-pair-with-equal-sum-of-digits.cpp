class Solution {
public:
  int f(int x) {
        int sum=0;
        while (x>0) {
            sum+=x%10;
            x/=10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        int n=nums.size(),ans=-1;
        unordered_map<int,int>m;
        for (int i=0;i<n;i++){
            int digit_sum=f(nums[i]);
            if (m.count(digit_sum)) ans=max(ans,m[digit_sum]+nums[i]);
            m[digit_sum]=max(m[digit_sum],nums[i]);
        }
        return ans;
    }
};
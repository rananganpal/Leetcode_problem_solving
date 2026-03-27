class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>m;
        m[0]=1;
        int prefix=0,count=0;
        for (int i=0;i<nums.size();i++){
          prefix+=nums[i];
          int rem=prefix-goal;
          count+=m[rem];
          m[prefix]+=1;
        }
        return count;
    }
};
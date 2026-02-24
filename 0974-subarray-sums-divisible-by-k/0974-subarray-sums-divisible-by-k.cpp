class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        m[0]=1;
        int prefixsum=0,res=0;
        for (int i=0;i<nums.size();i+=1){
          prefixsum+=nums[i];
          int rem=prefixsum%k;
          if (rem<0) rem+=k;
          if (m.count(rem)!=0) res+=m[rem];
          m[rem]+=1;
        }
        return res;
    }
};
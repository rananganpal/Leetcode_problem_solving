class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;
        for (int i=0;i<n;i++){
         if (nums[i]==0) nums[i]=-1;
        }
        int prefixsum=0,maxi=0;
        for (int i=0;i<n;i++){
            prefixsum+=nums[i];
            if (prefixsum==0) maxi=i+1;
            if (m.find(prefixsum)!=m.end()) maxi=max(maxi,i-m[prefixsum]);
            if (m.find(prefixsum)==m.end()) m[prefixsum]=i;
        }
        return maxi;
    }
};
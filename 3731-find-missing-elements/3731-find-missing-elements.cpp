class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_map<int,int>m;
        int maxi=INT_MIN,mini=INT_MAX;
        for (int i=0;i<nums.size();i++){
            m[nums[i]]+=1;
            maxi=max(maxi,nums[i]);
            mini=min(nums[i],mini);
        }
        vector<int>vec;
        for (int i=mini+1;i<=maxi-1;i++){
            if (m[i]==0) vec.push_back(i);
        }
        return vec;
    }
};
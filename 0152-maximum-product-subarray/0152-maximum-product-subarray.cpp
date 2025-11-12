class Solution {
public:
    int maxProduct(vector<int>& nums) {
     int maxi=INT_MIN,prefix=1,suffix=1;
     for (int i=0;i<nums.size();i++){
        if (suffix==0) suffix=1;
        if (prefix==0) prefix=1;
        prefix=prefix*nums[i];
        suffix=suffix*nums[nums.size()-i-1];
        maxi=max(maxi,max(suffix,prefix));
     }
     return maxi;
    }
};
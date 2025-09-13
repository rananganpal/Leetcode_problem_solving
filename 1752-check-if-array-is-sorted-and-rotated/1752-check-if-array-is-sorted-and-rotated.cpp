class Solution {
public:
    bool check(vector<int>& nums) {
        auto m=min_element(nums.begin(),nums.end());
        int min_index=distance(nums.begin(),m);
        int n=nums.size(),a=1;
        if (min_index==0){
            for (int i=0;i<n-1;i++){
                if (nums[i]>nums[i+1]){
                  return false;
                }
            }
            return true;
        }
        for (int i=min_index;i!=min_index-1;i=(i+1)%n){
            if (nums[i]<nums[(i+1)%n]){
                a=1;
            } else {
                a=0; break;
            }
        }
        if (a==0){
            return false;
        }
        return true;
    }
};
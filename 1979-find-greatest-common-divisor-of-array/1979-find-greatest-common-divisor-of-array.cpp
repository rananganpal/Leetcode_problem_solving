class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=nums[0],b=nums[nums.size()-1];
        if (a==1 || b==1){
            return 1;
        }
        for (int i=(a<b)?a:b;i>=1;i--){
            if (a%i==0 && b%i==0){
                return i;
            }
        }
        return 1;
    }
};
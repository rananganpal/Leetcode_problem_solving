class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if (nums.size()!=1){
        int count_zero=0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]==0){
                count_zero++;
            }
        }
        vector<int>vec(nums.size()-count_zero,0);
        int p=0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]!=0){
                vec[p++]=nums[i];
            }
        }
        for (int i=0;i<p;i++){
            nums[i]=vec[i];
        }
        for (int i=p;i<nums.size();i++){
            nums[i]=0;
         }
        }
    }
};
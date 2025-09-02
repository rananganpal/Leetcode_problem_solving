class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       int n=nums.size();
        vector<int>arr_pos(n/2,0);
        vector<int>arr_neg(n/2,0);
        int p=0,nc=0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]>0){
                arr_pos[p++]=nums[i];
            } else {
                arr_neg[nc++]=nums[i];
            }
        }
        int k=0;
        for (int i=0;i<n/2;i++){
          nums[k++]=arr_pos[i];
          nums[k++]=arr_neg[i];
        }
        return nums;
    }
};
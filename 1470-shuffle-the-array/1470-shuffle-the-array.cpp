class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int k=0;
        vector<int>arr(nums.size(),0);
        for (int i=0;i<n;i++){
           arr[k++]=nums[i];
           arr[k++]=nums[n+i];
        }
        return arr;
    }
};
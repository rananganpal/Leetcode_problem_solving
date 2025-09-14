class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums){
        vector<int>arr(nums.size(),0);
        int a=nums[0],sum_total=0;
        for (int i=0;i<nums.size();i++){
            sum_total+=nums[i];
        }
        for (int i=0;i<nums.size();i++){
            int sum=0;
            sum=nums[i]*(i+1)-a+(sum_total-a)-nums[i]*(nums.size()-i-1);
            arr[i]=sum;
            if (i==nums.size()-1){
                continue;
            }
            a+=nums[i+1];
        }
        return arr;
    }
};
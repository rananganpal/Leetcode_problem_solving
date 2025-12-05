class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count=0,left_sum=0,right_sum=0;
        for (int i=0;i<nums.size();i+=1){
           right_sum+=nums[i];
        }
        for (int i=0;i<=nums.size()-2;i++){
           left_sum+=nums[i];
           right_sum-=nums[i];
           if (abs(right_sum-left_sum)%2==0) count++;
        }
        return count;
    }
};
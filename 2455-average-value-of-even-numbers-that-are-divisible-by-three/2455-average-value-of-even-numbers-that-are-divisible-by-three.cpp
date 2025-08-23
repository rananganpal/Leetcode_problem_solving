class Solution {
public:
    int averageValue(vector<int>& nums) {
        int average=0,sum=0,count=0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]%6==0){
                sum+=nums[i];
                count++;
            }
        }
         if (count>0)
        average=sum/count;
        return average;
    }
};
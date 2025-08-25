class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0,count=0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]==1){
                c++;
            } else {
                if (c>count){
                    count=c; 
                }
                c=0;
            }
        }
        if (c>count){
            return c;
        }
        return count;
    }
};
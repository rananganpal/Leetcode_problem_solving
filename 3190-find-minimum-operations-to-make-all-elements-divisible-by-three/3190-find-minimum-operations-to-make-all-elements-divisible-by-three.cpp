class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int min_oper=0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]%3==1 || nums[i]%3==2){
                min_oper++;
            }
            if (nums[i]%3==0){
                min_oper+=0;
            }
        }
        return min_oper;
    }
};
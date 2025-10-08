class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int count_even=0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]%2==0){
                count_even++;
            }
        }
        if (count_even==0){
            return 0;
        }
        int result=0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]%2==0){
                result=result | nums[i];
            }
        }
        return result;
    }
};
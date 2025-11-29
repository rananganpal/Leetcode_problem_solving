class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum_element=0;
        for (int i:nums){
            sum_element+=i;
        }
         if (sum_element%k==0){
            return 0;
         }
         return sum_element%k;
    }
};
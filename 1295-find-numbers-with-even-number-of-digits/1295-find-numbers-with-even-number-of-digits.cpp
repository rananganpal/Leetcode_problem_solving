class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for (int i=0;i<nums.size();i++){
            int n=nums[i];
            if (n>=10 && n<100){
                count++;
            } 
            if (n>=1000 && n<10000){
                count++;
            }
            if (n==100000){
                count++;
            }
        }
        return count;
    }
};
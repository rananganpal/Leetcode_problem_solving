class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int max=abs(nums[nums.size()-1]-nums[0]);
        for (int i=0;i<nums.size()-1;i++){
            int a=abs(nums[i]-nums[i+1]);
            if (a>max){
                max=a;
            }
        }
        return max;
    }
};
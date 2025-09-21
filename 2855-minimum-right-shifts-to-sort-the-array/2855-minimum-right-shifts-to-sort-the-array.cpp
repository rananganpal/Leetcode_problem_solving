class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        auto m=min_element(nums.begin(),nums.end());
        int index=distance(nums.begin(),m);
        if (index==0){
            for (int i=0;i<nums.size()-1;i++){
                if (nums[i]>nums[i+1]){
                   return -1;
                }
            }
            return 0;
        }
         for (int i=0; i<nums.size()-1;i++) {
            int curr = (index + i) % nums.size();
            int next = (index + i + 1) % nums.size();
            if (nums[curr] > nums[next]) {
                return -1;  
            }
        }
        return nums.size()-index;
    }
};
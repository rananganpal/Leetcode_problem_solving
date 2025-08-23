class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>vec(100001,0);
        for (int i=0;i<nums.size();i++){
            vec[nums[i]]+=1;
        }
        for (int i=0;i<100001;i++){
            if (vec[i]>=2){
                return i;
            }
        }
        return 0;
    }
};
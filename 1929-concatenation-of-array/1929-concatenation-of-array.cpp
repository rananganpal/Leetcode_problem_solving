class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>vec(2*nums.size(),0);
        for (int i=0;i<nums.size();i++){
            vec[i]=nums[i];
        }
        for (int i=0;i<nums.size();i++){
            vec[i+nums.size()]=nums[i];
        }
        return vec;
    }
};
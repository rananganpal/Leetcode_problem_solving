class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>m;
         vector<int> result;
        for (int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for (const auto&pair:m){
            if (pair.second>nums.size()/3){
               result.push_back(pair.first);
            }
        }
        return result;
    }
};
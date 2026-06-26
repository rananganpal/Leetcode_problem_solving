class Solution {
public:
  void dfs(vector<int>&nums,int index,vector<vector<int>>&vec) {
        if (index==nums.size()) {
            vec.push_back(nums);
            return;
        }
        for (int i=index;i<nums.size();i++) {
            swap(nums[index],nums[i]);
            dfs(nums,index+1,vec);
            swap(nums[index],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>vec;
        dfs(nums,0,vec);
        return vec;
    }
};
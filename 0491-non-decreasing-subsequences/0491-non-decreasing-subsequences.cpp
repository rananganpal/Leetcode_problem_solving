class Solution {
public:
  void dfs(int index,vector<int>&temp,vector<int>&nums,int last_value,set<vector<int>>&st){
    if (index>nums.size()) return;
    if (temp.size()>1) st.insert(temp);
    for (int i=index;i<nums.size();i++){
        if (last_value<=nums[i]){
            temp.push_back(nums[i]);
            dfs(i+1,temp,nums,nums[i],st);
            temp.pop_back();
        }
    }
  }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int>temp;
        set<vector<int>>st;
        dfs(0,temp,nums,-101,st);
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
};
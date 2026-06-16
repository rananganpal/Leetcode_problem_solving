class Solution {
public:
  vector<vector<int>>vec;
  void dfs(int sum,vector<int>&candidates,int target,int index,vector<int>&temp){
    if (sum>target) return;
    if (sum==target){
       vec.push_back(temp);
        return;
    }
    for (int i=index;i<candidates.size();i++){
        if (i>index && candidates[i]==candidates[i-1]) continue;
        temp.push_back(candidates[i]);
        dfs(sum+candidates[i],candidates,target,i+1,temp);
         temp.pop_back();
    }
  }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         vec.clear();
        sort(candidates.begin(),candidates.end());
        vector<int>temp;
        dfs(0,candidates,target,0,temp);
        return vec;
    }
};
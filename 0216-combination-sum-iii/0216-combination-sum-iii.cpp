class Solution {
public:
  vector<vector<int>>vec;
void dfs(int sum,int k,int n,int count,vector<int>&arr,int start){
    if (sum>n) return;
    if (count==k){
        if (sum==n) vec.push_back(arr);
        return;
    }
   for (int i=start+1;i<=9;i++){
    arr.push_back(i);
    dfs(sum+i,k,n,count+1,arr,i);
    arr.pop_back();
   }
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>arr;
        dfs(0,k,n,0,arr,0);
        return vec;
    }
};
class Solution {
public:
   void f(int val,vector<vector<int>>&graph,vector<int>&vec,vector<vector<int>>&result){
    vec.push_back(val);
    if (val==graph.size()-1) result.push_back(vec);
    else {
        for (int i:graph[val]) {
              f(i,graph,vec,result);
            }
       }
       vec.pop_back();
   }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> result;
        vector<int>vec;
        f(0,graph,vec,result);
        return result;
    }
};
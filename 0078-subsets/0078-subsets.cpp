class Solution {
public:
  struct VectorHash {
    size_t operator()(const vector<int>& v) const {
        size_t hash = 0;
        for (int x : v) {
            hash^=hash*31+x;
        }
        return hash;
    }
};
 unordered_set<vector<int>,VectorHash>s;
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>vec;
        s.insert(vec);
        f(0,vec,nums);
        vector<vector<int>>v(s.begin(),s.end());
        return v;
    }
    void f(int i,vector<int>&vec,vector<int>&nums){
        for (int j=i;j<nums.size();j++){
            vec.push_back(nums[j]);
            s.insert(vec);
            f(j+1,vec,nums);
            vec.pop_back();
        }
    }
};
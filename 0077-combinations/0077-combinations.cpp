class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>arr;
        vector<int>vec;
        f(n,k,1,arr,vec);
        return arr;
    }
    void f(int n,int k,int val,vector<vector<int>>&arr,vector<int>&vec){
        if (k==vec.size()){
          arr.push_back(vec);
          return;
        }
        for (int i=val;i<=n;i++){
            vec.push_back(i);
            f(n,k,i+1,arr,vec);
            vec.pop_back();
        }
    }
};
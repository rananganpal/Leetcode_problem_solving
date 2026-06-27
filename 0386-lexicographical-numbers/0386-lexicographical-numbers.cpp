class Solution {
public:
   void dfs(int sum,int n,vector<int>&vec){
    vec.push_back(sum);
    for (int i=0;i<=9;i++){
        if (sum*10+i<=n) dfs(sum*10+i,n,vec);
        else break; 
     }
   }
    vector<int> lexicalOrder(int n) {
        vector<int>vec;
        for (int i=1;i<=9;i++){
           if (i<=n) dfs(i,n,vec);
        }
        return vec;
    }
};
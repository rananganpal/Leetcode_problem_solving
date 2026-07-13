class Solution {
public:
  void dfs(int sum,int low,int high,vector<int>&vec){
    if (sum>high) return;
    if (sum>=10 && low<=sum && sum<=high){
        vec.push_back(sum);
    }
    int ld=sum%10;
    if (ld<9) dfs(sum*10+(ld+1),low,high,vec);
  }
    vector<int> sequentialDigits(int low, int high) {
        vector<int>vec;
        for (int i=1;i<=9;i++){
            dfs(i,low,high,vec);
        }
        sort(vec.begin(),vec.end());
        return vec;
    }
};
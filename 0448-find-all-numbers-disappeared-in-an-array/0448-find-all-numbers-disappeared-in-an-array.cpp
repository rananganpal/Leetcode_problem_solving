class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int>m;
      int n=nums.size();
      for (int i=0;i<n;i++){
        m[nums[i]]+=1;
      }
      vector<int>vec;
      for (int i=1;i<=n;i++){
        if (m[i]==0){
            vec.push_back(i);
        }
      }
      return vec;
    }
};
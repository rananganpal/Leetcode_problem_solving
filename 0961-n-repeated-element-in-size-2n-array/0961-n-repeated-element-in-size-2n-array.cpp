class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        set<int>s;
        for (int i=0;i<nums.size();i++){
            s.insert(nums[i]);
         }
           vector<int>vec(s.begin(),s.end());
           for (int i=0;i<vec.size();i++){
            int count=0;
            for (int j=0;j<nums.size();j++){
                if (vec[i]==nums[j]){
                    count++;
                }
            }
            if (count>1){
                return vec[i];
            }
           }
      return 0;
    }
};
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int>m;
        for (int i=0;i<nums.size();i++){
            m[nums[i]]+=1;
        }
        vector<int>vec;
        set<int>s;
         for (int i=0;i<nums.size();i++){
           s.insert(nums[i]);
        }
        vector<int>arr(s.begin(),s.end());
        for (int i=0;i<arr.size();i++){
            if (m[arr[i]]==2){
                vec.push_back(arr[i]);
            }
        }
        return vec;
    }
};
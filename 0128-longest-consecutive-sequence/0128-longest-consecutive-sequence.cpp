class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int longest=0;
        for (int num:s){
            if (!s.count(num-1)){
                int val=num;
                int count=1;
                while (s.count(val+1)){
                    val++;
                    count++;
                }
                longest=max(longest,count);
            }
        }
        return longest;
    }
};
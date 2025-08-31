class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        vector<int>count(divisors.size(),0);
        for (int i=0;i<divisors.size();i++){
            int c=0;
            for (int j=0;j<nums.size();j++){
                if (nums[j]%divisors[i]==0){
                    c++;
                }
            }
            count[i]=c;
        }
   int maxCount = *max_element(count.begin(), count.end());
        int ans = INT_MAX;
        for (int i = 0; i < divisors.size(); i++) {
            if (count[i] == maxCount && divisors[i] < ans) {
                ans = divisors[i];
            }
        }
        return ans;
    }
};
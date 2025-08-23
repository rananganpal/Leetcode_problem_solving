class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int count_once=0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]==1){
                count_once+=1;
            }
        }
        int p=0;
        vector<int>vec(count_once,0);
        for (int i=0;i<nums.size();i++){
            if (nums[i]==1){
                vec[p]=i;
                p++;
            }
        }
        int a=1;
        for (int i=0;i<count_once-1;i++){
            if (vec[i+1]-vec[i]-1>=k){
                a=1;
            } else {
                a=0; break;
            }
        }
        if (a==1){
            return true ;
        }
        return false;
    }
};
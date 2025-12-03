class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1,a=1,n=nums.size();
        vector<int>answer(nums.size(),0);
        int x=1,count_zero=0;
        for (int i=0;i<n;i++){
            if (nums[i]==0){
                count_zero++;
            }
        }
       
        if (count_zero>=2){
          for (int i=0;i<n;i++){
            answer[i]=0;
          }
          return answer;
        } 
        for (int i=0;i<nums.size();i++){
             if (nums[i]==0){
                a=0;
                continue;
             }
             product*=nums[i];
        }
         if (a!=0){
            for (int i=0;i<n;i++){
                answer[i]=product/nums[i];
            }
         } else {
            for (int i=0;i<n;i++){
                if (nums[i]==0){
                    answer[i]=product;
                } else {
                    answer[i]=0;
                }
            }
         }
         return answer;
    }
};
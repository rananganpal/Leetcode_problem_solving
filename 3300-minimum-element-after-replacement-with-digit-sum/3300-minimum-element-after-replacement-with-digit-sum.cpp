 int sum(int n){
    if (n>=1 && n<=9){
        return n;
    }
    int s=0;
    while (n!=0){
      s+=(n%10);
      n/=10;
    }
    return s;
 }
class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int>vec(nums.size(),0);
        for (int i=0;i<nums.size();i++){
            vec[i]=sum(nums[i]);
        } 
        int a=vec[0];
        for (int i=1;i<nums.size();i++){
            a=min(a,vec[i]);
        }
        return a;
    }
};
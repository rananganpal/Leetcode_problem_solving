class Solution {
public:
   int f(vector<int>&nums,int l,int r){
    int n=nums.size();
    int prev1=0,prev2=0;
    for (int i=l;i<=r;i++){
        int val=nums[i];
        int curr=max(prev2+val,prev1);
        prev2=prev1;
        prev1=curr;
    }
    return prev1;
   }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if (n==1) return nums[0];
        return max(f(nums,0,n-2),f(nums,1,n-1));
    }
};
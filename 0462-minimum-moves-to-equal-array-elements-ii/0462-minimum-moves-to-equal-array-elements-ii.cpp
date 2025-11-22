class Solution {
public:
    int minMoves2(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int n=nums.size();
      if (n==1) return 0;
      if (n==2){
        int val=(nums[0]+nums[1])/2;
        int sum=abs(val-nums[0])+abs(val-nums[1]);
        return sum;
      }
      if (n%2!=0){
        int sum=0;
        int value=nums[n/2];
        for (int i=0;i<n;i++){
            sum+=abs(value-nums[i]);
        }
        return sum;
      }
      int sum=0;
      int value=(nums[n/2]+nums[n/2-1])/2;
      for (int i=0;i<n;i++) sum+=abs(value-nums[i]);
      return sum;
    }
};
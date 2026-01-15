class Solution {
public:
    int arrangeCoins(int n) {
      long long low=1,high=n,ans=1;
      while (low<=high){
        long long mid=(low+high)/2;
        long long value=(mid*(mid+1))/2;
        if (value<=n){
            ans=mid;
            low=mid+1;
        } else {
            high=mid-1;
        }
      }
      return ans;
    }
};
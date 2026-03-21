class Solution {
public:
   int count(int m,int n,int mid){
   int c=0;
     for (int i=1;i<=m;i++){
        c+=min(n,mid/i);
     }
     return c;
   }
    int findKthNumber(int m, int n, int k) {
        int low=1,high=m*n;
        while (low<high){
            int mid=(low+high)/2;
             if (count(m,n,mid)<k) low=mid+1;
             else high=mid;
        }
        return low;
    }
};
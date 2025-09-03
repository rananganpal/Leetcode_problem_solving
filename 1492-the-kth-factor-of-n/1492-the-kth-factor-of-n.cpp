class Solution {
public:
    int kthFactor(int n, int k) {
        if (n<k){
            return -1;
        }
        int count=2;
        for (int i=2;i<n;i++){
            if (n%i==0){
                count++;
            } 
        }
        if (count<k){
            return -1;
        }
        int p=0;
        vector<int>arr(count,0);
        for (int i=1;i<=n;i++){
            if (n%i==0){
                arr[p++]=i;
            }
        }
       return arr[k-1];
    }
};
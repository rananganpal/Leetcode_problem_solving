class Solution {
public:
    int pivotInteger(int n) {
        if (n==1){
            return 1;
        }
        for (int i=2;i<=n;i++){
            int sum1=((n*(n+1))/2+i)-((i*(i+1))/2);
            int sum2=(i*(i+1))/2;
            if (sum1==sum2){
                return i;
            }
        }
        return -1;
    }
};
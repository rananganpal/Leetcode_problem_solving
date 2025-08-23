class Solution {
public:
    int subtractProductAndSum(int n) {
        if (n>=1 && n<=9){
            return 0;
        }
        int num=n,product=1,sum=0;
        while (num!=0){
            product*=(num%10);
            sum+=(num%10);
            num/=10;
        }
        return product-sum;
    }
};
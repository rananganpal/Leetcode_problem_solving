class Solution {
public:
    int getPrimeSum(int n) {
        int sum=0;
        int num=n;
        while (num%2==0) {
            sum+=2;
            num/=2;
        }
        for (int i=3;i*i<=num;i+=2) {
            while (num%i==0) {
                sum+=i;
                num/=i;
            }
        }
        if (num>1) {
            sum+=num;
        }
        return sum;
    }
    int smallestValue(int n) {
        while (true) {
            int sum=getPrimeSum(n);
            if (sum==n) return n;  
            n=sum;
        }
    }
};
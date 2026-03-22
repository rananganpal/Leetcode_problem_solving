class Solution {
public:
    int largestPrime(int n) {
         vector<bool>isPrime(n+1,true);
        isPrime[0]=isPrime[1]=false;
        for (int i=2;i*i<=n;i++) {
            if (isPrime[i]) {
                for (int j=i*i;j<=n;j+=i) {
                    isPrime[j]=false;
                }
            }
        }
        vector<int> primes;
        for (int i=2;i<=n;i++) {
            if (isPrime[i]) primes.push_back(i);
        }
        int maxi=0;
            int sum=0;
            for (int j=0;j<primes.size();j++) {
                sum+=primes[j];
                if (sum>n) break;
               if(isPrime[sum]) maxi=max(maxi,sum);
            }
        return maxi;
    }
};
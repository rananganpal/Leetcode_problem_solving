class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
              unordered_set<int>primes;
        for (int num:nums) {
            while (num%2==0) {
                primes.insert(2);
                num/=2;
            }
            for (int i=3;i*i<=num;i+=2) {
                while (num%i==0){
                    primes.insert(i);
                    num/=i;
                }
            }
            if (num>1) {
                primes.insert(num);
            }
        }
        return primes.size();
    }
};
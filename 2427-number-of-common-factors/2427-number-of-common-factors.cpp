class Solution {
public:
    int commonFactors(int a, int b) {
        int gcd = std::gcd(a, b);
        int count = 0;
       
        for (int i = 1; i * i <= gcd; i++) {
            if (gcd % i == 0) {
                count++; // i is a factor
                if (i != gcd / i) {
                    count++; // gcd / i is also a factor
                }
            }
        }
        return count;
    }
};
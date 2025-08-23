
class Solution {
public:
    int tribonacci(int n) {
        if (n == 0) return 0;
        if (n == 1 || n == 2) return 1;
        // Initialize the first three Tribonacci numbers
        int t0 = 0, t1 = 1, t2 = 1, tN;
        // Calculate the Tribonacci numbers iteratively
        for (int i = 3; i <= n; i++) {
            tN = t0 + t1 + t2; // T(n) = T(n-1) + T(n-2) + T(n-3)
            t0 = t1; // Move to the next number
            t1 = t2;
            t2 = tN;
        }
        return t2;
    }
};
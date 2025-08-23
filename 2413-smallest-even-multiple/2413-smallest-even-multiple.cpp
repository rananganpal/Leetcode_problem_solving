class Solution {
public:
    int smallestEvenMultiple(int n) {
        if (n%2==0){
            return n;
        }
        if (n==1){
            return 2;
        }
        return 2*n;
    }
};
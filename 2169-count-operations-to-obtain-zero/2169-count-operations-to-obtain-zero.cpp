class Solution {
public:
    int countOperations(int num1, int num2) {
      long long count = 0;
        long long n1 = num1, n2 = num2;
        while (n1 != 0 && n2 != 0) {
            if (n1 >= n2) {
                count += n1 / n2; 
                n1 = n1 % n2;     
            } else {
                count += n2 / n1;  
                n2 = n2 % n1;     
            }
        }
        return count;
    }
};
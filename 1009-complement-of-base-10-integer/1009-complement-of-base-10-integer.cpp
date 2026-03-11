class Solution {
public:
    int bitwiseComplement(int n) {
               if (n == 0) {
            return 1;
        }
        string s;
        int num = n;
        while (n != 0) {
            s += to_string(n % 2);
            n /= 2;
        }
        reverse(s.begin(), s.end());
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '1') {
                s[i] = '0';
            } else {
                s[i] = '1';
            }
        }
         int number = 0;
        for (char c : s) {
            number = number * 2 + (c - '0');
        }
        
        return number;
    }
};
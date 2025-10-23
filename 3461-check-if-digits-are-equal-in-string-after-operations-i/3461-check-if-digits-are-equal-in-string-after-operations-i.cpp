
class Solution {
public:
    bool hasSameDigits(string s) {
       while (s.size() > 2) {
            string str="";
            for (size_t i = 0; i < s.size() - 1; i++) {
              int sum=(s[i] - '0' + s[i + 1] - '0') % 10;
              str+=std::to_string(sum);
            }
            s=str;
        }
        return (s.size()==2 && s[0]==s[1]);
    }
};
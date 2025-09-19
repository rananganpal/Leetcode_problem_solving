class Solution {
public:
    string reverseParentheses(string s) {
          vector<int> p;  
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                p.push_back(i);
            } else if (s[i] == ')') {
                int start = p.back();
                p.pop_back();
                reverse(s.begin() + start + 1, s.begin() + i);
            }
        }
        string str;
        for (char c : s) {
            if (c != '(' && c != ')') {
                str.push_back(c);
            }
        }
        return str;
    }
};
class Solution {
public:
    bool isValid(string s) {
      vector<char> arr;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                arr.push_back(s[i]);
            } else {
                if (arr.empty()) {  
                    return false;
                }
                char top = arr.back();
                if ((s[i] == ']' && top == '[') || 
                    (s[i] == ')' && top == '(') || 
                    (s[i] == '}' && top == '{')) {
                    arr.pop_back();
                } else {
                    return false;
                }
            }
        }
        return arr.empty();
    }
};
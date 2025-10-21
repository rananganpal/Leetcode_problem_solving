class Solution {
public:
    string makeGood(string s) {
        string str;
        str.push_back(s[0]);
       int top=0;
       for (int i=1;i<s.length();i++){
        if ( top>=0 &&std::tolower(s[i]) == std::tolower(str[top]) && s[i] != str[top]){
            top--;
            str.pop_back();
        } else {
            top++; str.push_back(s[i]);
        }
       }
        return str;
    }
};
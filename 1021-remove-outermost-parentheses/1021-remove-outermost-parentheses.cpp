class Solution {
public:
    string removeOuterParentheses(string s) {
        string str;
        vector<char>vec(s.length(),'0');
        int top=-1;
        for (int i=0;i<s.length();i++){
            if (top<0){
                top++;
                vec[top]=s[i];
                continue;
            }
            if (top>=0 && s[i]=='('){
                top++;
                vec[top]=s[i];
                if (top>0){
                    str.push_back(s[i]);
                }
            }
            if (top>=0 && s[i]==')'){
                if (top>0){
                    str.push_back(s[i]);
                }
                top--;
            }
        }
        return str;
    }
};
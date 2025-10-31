class Solution {
public:
    int minAddToMakeValid(string s) {
               vector<char>vec(s.length(),'0');
        int top=-1;
        for (int i=0;i<s.length();i++){
            if (top<0){
                top++;
                vec[top]=s[i];
                continue;
            }
            if (s[i]=='('){
                top++;
                vec[top]=s[i];
            }
            if (s[i]==')'){
                if (top>=0 && vec[top]=='('){
                    top--;
                }else {
                  top++;
                  vec[top]=s[i];
                }
            }
        }
        return top+1;
    }
};
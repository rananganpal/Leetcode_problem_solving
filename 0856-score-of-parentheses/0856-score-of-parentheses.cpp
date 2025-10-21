class Solution {
public:
    int scoreOfParentheses(string s) {
        int sum=0;
        if (s.length()==2){
            return 1;
        }
        vector<char>stack(s.length()/2+2,'1');
        int top=-1;
        for (int i=0;i<s.length();i++){
            if (s[i]=='('){
                top++;
                stack[top]=s[i];
            } else {
                if (top>=1){
                    sum+=pow(2,top-1);
                }
                if (top==0){
                    sum+=1;
                }
                top--;
            }
        }
        return sum;
    }
};
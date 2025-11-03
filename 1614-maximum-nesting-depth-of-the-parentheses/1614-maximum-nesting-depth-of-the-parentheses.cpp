class Solution {
public:
    int maxDepth(string s) {
        int maxi=INT_MIN,top=-1;
        vector<char>arr(s.length(),'0');
        for (int i=0;i<s.length();i++){
            if (isdigit(s[i]) || s[i]=='+' || s[i]=='*' || s[i]=='-' || s[i]=='/'){
                continue;
            }
            if (s[i]=='('){
                top+=1;
                arr[top]=s[i];
                maxi=max(maxi,top);
            }
            if (s[i]==')'){
                if (top>=0){
                    top--;
                }
            }
        }
        return maxi+1;
    }
};
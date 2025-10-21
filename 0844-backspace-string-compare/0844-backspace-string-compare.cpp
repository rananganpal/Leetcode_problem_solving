class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char>stack1;
        vector<char>stack2;
        int i=0,j=0;
        while (i<s.length() || j<t.length()){
            if (s[i]=='#'){
                if (!stack1.empty())
                stack1.pop_back();
            } else {
                stack1.push_back(s[i]);
            }
             if (t[i]=='#'){
                if (!stack2.empty())
                stack2.pop_back();
            } else {
                stack2.push_back(t[i]);
            }
            i++; j++;
        }
        return stack1==stack2;
    }
};
class Solution {
public:
    string processStr(string s) {
        string temp="";
        for (int i=0;i<s.length();i++){
            if (isalpha(s[i])){
                temp+=s[i];
                continue;
            }
            if (s[i]=='*'){
                if (temp.length()!=0) temp.pop_back();
            }
            if (s[i]=='#') temp=temp+temp;
            if (s[i]=='%'){
                reverse(temp.begin(), temp.end());
            }
        }
        return temp;
    }
};
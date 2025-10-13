class Solution {
public:
    bool isSubstringPresent(string s) {
        int a=1;
        if (s.length()<2){
            return false;
        }
        if (s.length()==2){
            return s[0]==s[1];
        }
        string str=s;
        reverse(str.begin(),str.end());
        if (str==s){
            return true;
        }
        for (size_t i=0;i+2<=s.length();++i){
            string s1=s.substr(i,2);
            size_t pos=str.find(s1);
            if (pos!=std::string::npos){
                a=0; break;
            } else {
                a=1;
            }
        }
        if (a==0){
            return true;
        }
        return false;
    }
};
class Solution {
public:
    string reverseWords(string s) {
       string str="",temp="";
       for (int i=0;i<s.length();i++){
         if (i==s.length()-1 && s[i]!=' '){
            temp+=s[i];
             str=" " +temp +str;
            temp="";
         }
         if (s[i]!=' '){
           temp+=s[i];
         }
         if (s[i]==' ' && temp!=""){
            str=" " +temp +str;
            temp="";
         }
       }
        if (!str.empty()) {
        str.erase(0, 1); 
     }
     return str;
    }
};
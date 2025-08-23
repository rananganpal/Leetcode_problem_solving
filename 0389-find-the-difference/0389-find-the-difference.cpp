class Solution {
public:
    char findTheDifference(string s, string t) {
        if (s.length()==0 && t.length()==1){
            return t[0];
        }
         int ASCII_S=0,ASCII_T=0;
         for (int i=0;i<s.length();i++){
            ASCII_S+=s[i];
         }
         for (int i=0;i<t.length();i++){
            ASCII_T+=t[i];
         }
         int A=ASCII_T-ASCII_S;
         char C=A;
         return C;
    }
};
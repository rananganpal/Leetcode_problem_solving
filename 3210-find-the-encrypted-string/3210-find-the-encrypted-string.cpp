class Solution {
public:
    string getEncryptedString(string s, int k) {
       string str=s;
       for (int i=0;i<s.length();i++){
         s[i]=str[(k+i)%s.length()];
       }
       return s; 
    }
};
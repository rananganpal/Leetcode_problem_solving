class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count_one=0;
        for (int i=0;i<s.length();i++){
            if (s[i]=='1'){
                count_one++;
            }
        }
         
         if (count_one==s.length()){
            return s;
         }
        if (count_one==1){
            for (int i=0;i<s.length()-1;i++){
                s[i]='0';
            }
            s[s.length()-1]='1';
            return s;
        }
         for (int i=0;i<count_one-1;i++){
            s[i]='1';
         }
         for (int i=count_one-1;i<s.length()-1;i++){
            s[i]='0';
         }
         s[s.length()-1]='1';
         return s;
    }
};
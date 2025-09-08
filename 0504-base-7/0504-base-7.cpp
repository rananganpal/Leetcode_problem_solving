class Solution {
public:
    string convertToBase7(int num) {
        string s="";
        int n=num;
        if (num==0){
            char ch='0';
         s.push_back(ch);
         return s;
        }
        if (num<0){
            n=n*(-1);
            char ch='-';
            s.push_back(ch);
        }
        while (n!=0){
            char ch='0'+ n % 7;
            s.push_back(ch);
            n/=7;
        }
        if (num<0){
            vector<char>vec(s.length()-1,'1');
            for (int i=1;i<s.length();i++){
                vec[i-1]=s[s.length()-i];
            }
            for (int i=0;i<s.length()-1;i++){
                s[i+1]=vec[i];
            }
            return s;
        }
        vector<char>vec(s.length(),'1');
        for (int i=0;i<s.length();i++){
            vec[i]=s[s.length()-1-i];
        }
        for (int i=0;i<s.length();i++){
            s[i]=vec[i];
        }
        return s;
    }
};
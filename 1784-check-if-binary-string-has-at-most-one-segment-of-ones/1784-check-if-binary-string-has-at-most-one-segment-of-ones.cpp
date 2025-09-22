class Solution {
public:
    bool checkOnesSegment(string s) {
        if (s.length()==1 && s[0]=='1'){
            return true;
        }
        for (int i=0;i<s.length()-1;i+=1){
            int x;
            int a=s[i]-'0',b=s[i+1]-'0';
            x=a&b;
            if (x==1){
                return true;
            }
        }
        return false;
    }
};
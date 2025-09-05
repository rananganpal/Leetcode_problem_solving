class Solution {
public:
    string generateTheString(int n) {
        string s(n,' ');
        if (n==1){
            s[0]='a';
            return s;
        }
        if (n==2){
            s[0]='x'; s[1]='y';
            return s;
        }
        if (n%2==0){
            for (int i=0;i<n-1;i++){
                s[i]='a';
            }
            s[n-1]='r';
            return s;
        }
        for (int i=0;i<n-2;i++){
            s[i]='a';
        }
        s[n-2]='p';
        s[n-1]='r';
        return s;
    }
};
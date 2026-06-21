class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>m;
        for (int i=0;i<s.length();i++) m[s[i]]+=1;
        int len=0;
        bool flag=true;
        for (auto &p:m){
            char ch=p.first;
            if (m[ch]%2==0) len+=m[ch];
            else {
                len+=m[ch]-1;
                if (flag){
                    len++;  flag=false;
                }
            }
        }
        return len;
    }
};
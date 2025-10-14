class Solution {
public:
    int minimumChairs(string s) {
     int n=0,maxi=0;
     for (int i=0;i<s.length();i++){
        if (s[i]=='E')
        n++;
        maxi=max(maxi,n);
        if (s[i]=='L')
        n--;
     }
     return maxi;
    }
};
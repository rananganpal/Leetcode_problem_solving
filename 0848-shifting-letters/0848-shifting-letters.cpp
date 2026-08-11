class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n=s.length();
        vector<long long>vec(n,0);
        vec[n-1]=shifts[n-1];
        for (int i=n-1;i>=1;i--) vec[i-1]=shifts[i-1]+vec[i];
        for (int i=0;i<n;i++){
            s[i]='a'+(s[i]-'a'+vec[i]%26)%26;
        }
        return s;
    }
};
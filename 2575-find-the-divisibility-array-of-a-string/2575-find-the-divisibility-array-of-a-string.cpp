class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        vector<int>vec(word.length(),0);
        long long rem=0;
        for (int i=0;i<word.length();i++){
            rem=(rem*10+(word[i]-'0'))%m;
            if (rem==0) vec[i]=1;
        }
        return vec;
    }
};
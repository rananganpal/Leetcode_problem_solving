class Solution {
public:
    int scoreOfString(string s) {
        vector<int>vec(s.length(),0);
        for (int i=0;i<s.length();i++){
            vec[i]=s[i];;
        }
        int sum=0;
        for (int i=0;i<s.length()-1;i++){
            sum+=abs(vec[i]-vec[i+1]);
        }
        return sum;
    }
};
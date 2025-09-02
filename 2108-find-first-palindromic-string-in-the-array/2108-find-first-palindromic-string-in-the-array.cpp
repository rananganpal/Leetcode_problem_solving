bool f(string s){
    return equal(s.begin(), s.begin() + s.size()/2, s.rbegin());
}
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (int i=0;i<words.size();i++){
            if (f(words[i])){
                return words[i];
            }
        }
        return "";
    }
};
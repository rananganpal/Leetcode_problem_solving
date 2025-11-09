class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string str=words[0];
        if (str==s){
            return true;
        }
        if (str.length()>s.length()){
            return false;
        }
        for (int i=1;(str.length()<s.length() && i<words.size());i++){
            str=str+words[i];
            if (str==s){
                return true;
            }
        }
        return false;
    }
};
class Solution {
public:
    bool rotateString(string s, string goal) {
       if (goal.length()!=s.length()) return false;
        string temp=s+s;
        if (temp.find(goal)!=std::string::npos) return true;
        return false;
    }
};
class Solution {
public:
    int minLength(string s) {
       while (true) {
            size_t pos1 = s.find("AB");
            if (pos1 !string::npos) {
                s.erase(pos1, 2);
                continue;
            }
            size_t pos2 = s.find("CD");
            if (pos2 != std::string::npos) {
                s.erase(pos2, 2); 
                continue;
            }
            break;
        }
        return s.length();
    }
};
class Solution {
public:
    string removeOccurrences(string s, string part) {
        size_t len=part.length();
        bool flag=true;
        while (flag){
         size_t index = s.find(part);
         if (index!=std::string::npos){
          s.erase(index, len);
          continue;
         }
         flag=false;
        }
        return s;
    }
};
class Solution {
public:
    bool isValid(string s) {
        bool flag=true;
        while (flag==true){
            int index=s.find("abc");
            if (index!=std::string::npos){
                s.erase(index,3);
            } else {
                flag=false;
            }
        }
        if (s=="") return true;
        return false;
    }
};
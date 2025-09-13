class Solution {
public:
    string greatestLetter(string s) {
        string str="";
        vector<int>arr(126,0);
        for (int i=0;i<s.length();i++){
            arr[s[i]-'\0']+=1;
        }
        for (int i=90;i>=65;i--){
            if (arr[i]>0 && arr[i+32]>0){
                char ch=(char)i;
                str.push_back(ch);
                return str;
            }
        }
        return str;
    }
};
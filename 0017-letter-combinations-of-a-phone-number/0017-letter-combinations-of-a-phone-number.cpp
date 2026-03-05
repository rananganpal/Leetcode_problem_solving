class Solution {
public:
  vector<string>arr;
  unordered_map<char,string>m={
    {'2', "abc"},
    {'3', "def"},
    {'4', "ghi"},
    {'5', "jkl"},
    {'6', "mno"},
    {'7', "pqrs"},
    {'8', "tuv"},
    {'9', "wxyz"}
};
    vector<string> letterCombinations(string digits) {
        int n=digits.length();
        f(0,digits,"");
        return arr;
    }
    void f(int i,string org,string temp){
       if (i>=org.length()){
        arr.push_back(temp);
        return;
       }
       string str=m[org[i]];
       for (int j=0;j<str.length();j++){
        temp+=str[j];
        f(i+1,org,temp);
        temp.pop_back();
       }
    }
};
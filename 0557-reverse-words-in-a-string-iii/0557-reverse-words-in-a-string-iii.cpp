class Solution {
public:
    string reverseWords(string s) {
        istringstream iss(s);
    string word, result;
    while (iss >> word) { 
        if (!result.empty()) result += " ";
        result += word;
       }
       int a=0;
      for (int i=0;i<result.length();i++){
        if (i==result.length()-1){
            reverse(result.begin()+a,result.begin()+i+1);
            break;
        }
        if (result[i]==' '){
            reverse(result.begin()+a,result.begin()+i);
            a=i+1;
        }
      }
      return result;
    }
};
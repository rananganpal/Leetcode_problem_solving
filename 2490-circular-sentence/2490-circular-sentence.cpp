class Solution {
public:
    bool isCircularSentence(string sentence) {
        stringstream ss(sentence);
    string word, result;
    while (ss >> word) {
        if (!result.empty()) result += " ";
        result += word;
       }
       int count_spaces=count(result.begin(),result.end(),' ');
       if (count_spaces==0 && result[0]==result[result.length()-1]){
        return true;
       }
        if (count_spaces==0 && result[0]!=result[result.length()-1]){
        return false;
       }
       if(result[0]!=result[result.length()-1]){
        return false;
       }
       for (int i=0;i<result.length();i++){
        if (result[i]==' '){
            if (result[i-1]!=result[i+1]){
                return false;
            }
        }
       }
       return true;
    }
};
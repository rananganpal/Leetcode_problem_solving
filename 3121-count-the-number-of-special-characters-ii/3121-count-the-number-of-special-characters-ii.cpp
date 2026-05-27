class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        for (int i=0;i<word.length();i++){
            if (islower(word[i])){
                m1[word[i]]=i;
            } else {
                char ch=tolower(word[i]);
                if (m2.find(ch)==m2.end()){
                    m2[ch]=i;
                }
            }
        }
        int count=0;
        for (auto it:m2){
          char ch=it.first;
          if (m1.find(ch)!=m1.end() && m1[ch]<m2[ch]){
            count++;
          }
        }
        return count;
    }
};
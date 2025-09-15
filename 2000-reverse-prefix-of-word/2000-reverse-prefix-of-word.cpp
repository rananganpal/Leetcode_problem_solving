class Solution {
public:
    string reversePrefix(string word, char ch) {
        int st=0,end=0;
        for (int i=0;i<word.length();i++){
            if (word[i]==ch){
                end=i; break;
            }
        }
        if (end==0){
            return word;
        }
        while (st<=end){
            swap(word[st],word[end]);
            st++; end--;
        }
        return word;
    }
};
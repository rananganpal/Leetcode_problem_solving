class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>freq(123,0);
        for (int i=0;i<sentence.length();i++){
            freq[sentence[i]]+=1;
        }
        for (int i=97;i<=122;i++){
            if (freq[i]==0){
                return false;
            }
        }
        return true;
    }
};
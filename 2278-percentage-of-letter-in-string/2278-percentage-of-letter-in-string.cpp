class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count=0;
        for (int i=0;i<s.length();i++){
            if (s[i]==letter){
                count+=1;
            }
        }
        int percentage=(count*100)/s.length();
        return percentage;
    }
};
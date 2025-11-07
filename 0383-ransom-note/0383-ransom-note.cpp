class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>m1;
        map<char,int>m2;
        int i=0,j=0;
        while (i<ransomNote.length() && j<magazine.length()){
            m1[ransomNote[i]]++;  m2[magazine[j]]++;
            i++; j++;
        }
        while (i<ransomNote.length()){
            m1[ransomNote[i]]+=1;
            i++;
        }
        while (j<magazine.length()){
            m2[magazine[i]]+=1;
            j++;
        }
        for (int i=0;i<ransomNote.length();i++){
           if (m1[ransomNote[i]]>m2[ransomNote[i]]){
              return false;
           }
        }
        return true;
    }
};
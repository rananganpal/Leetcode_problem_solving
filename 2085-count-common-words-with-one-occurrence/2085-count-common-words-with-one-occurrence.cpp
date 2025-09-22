class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string,int>m1;
        int count=0;
        map<string,int>m2;
        for (int i=0;i<words1.size();i+=1){
            m1[words1[i]]+=1;
        }
        for (int i=0;i<words2.size();i++){
            m2[words2[i]]++;
        }
        int  a=(words1.size()<words2.size())?1:0;
        if (a==0){
          for (int i=0;i<words2.size();i+=1){
            if (m1[words2[i]]==1 && m2[words2[i]]==1){
                count++;
            }
          }
        }
        else {
            for (int i=0;i<words1.size();i+=1){
            if (m1[words1[i]]==1 && m2[words1[i]]==1){
                count++;
            }
          }
        }
        return count;
    }
};
class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>arr(word.length(),0);
        int count=0;
      for (int i=0;i<word.length();i++){
        int a=word[i];
        arr[i]=a;
      }
      vector<int>vec(123,0);
      for (int i=0;i<word.length();i++){
        vec[arr[i]]+=1;
      }
      for (int i=65;i<91;i++){
        if (vec[i]>0 && vec[i+32]>0){
            count++;
        }
      }
      return count;
    }
};
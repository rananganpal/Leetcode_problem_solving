class Solution {
public:
    int maxFreqSum(string s) {
        int a=0;
      vector<int>arr(26,0);
      for (int i=0;i<s.length();i++){
          arr[s[i]-'a']+=1;
      } 
      vector<int>vowel(5,0);
      for (int i=0;i<26;i++){
        if (i==0 || i==4 || i==8 || i==14 || i==20){
            vowel[a++]=arr[i];
            arr[i]=0;
        }
      }
     sort(arr.begin(),arr.end());
     sort(vowel.begin(),vowel.end());
     return arr[25]+vowel[4];
    }
};
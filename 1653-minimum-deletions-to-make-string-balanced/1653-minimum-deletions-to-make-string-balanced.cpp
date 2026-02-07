class Solution {
public:
    int minimumDeletions(string s) {
      int b_count=0,no_delete=0;
      for (int i=0;i<s.length();i++){
        if (s[i]=='b') b_count++;
        else {
          no_delete=min(no_delete+1,b_count);
         }
      }
      return no_delete;
    }
};
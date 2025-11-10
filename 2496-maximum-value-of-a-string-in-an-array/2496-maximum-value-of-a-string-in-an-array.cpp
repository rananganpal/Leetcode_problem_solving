class Solution {
public:
    int maximumValue(vector<string>& strs) {
       int maxi=INT_MIN;
       for (int i=0;i<strs.size();i++){
          bool all_digits=std::all_of(strs[i].begin(), strs[i].end(), ::isdigit);
          if (all_digits){
            maxi=max(maxi,stoi(strs[i]));
          } else {
            maxi=max(maxi,(int)strs[i].length());
          }
       }
       return maxi;
    }
};
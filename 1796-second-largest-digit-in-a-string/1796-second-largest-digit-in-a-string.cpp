class Solution {
public:
    int secondHighest(string s) {
    set<int>vec;
    for (int i=0;i<s.length();i++){
        if (s[i]>='0' && s[i]<='9'){
            vec.insert(s[i]-'0');
        }
      }
        vector<int>arr(vec.begin(),vec.end());
        if (arr.size()<=1){
            return -1;
        }
        return arr[arr.size()-2];
    }
};
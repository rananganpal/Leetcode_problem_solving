class Solution {
public:
    string frequencySort(string s) {
      map<char,int>m;
      for (int i=0;i<s.length();i++){
        m[s[i]]+=1;
      }
      multimap<int,char, greater<int>> m_rev;
    for (auto &p : m) {
        m_rev.insert({p.second, p.first}); 
    }
    string str="";
      for (auto &p : m_rev) {
        for (int i=0;i<p.first;i++){
            str.push_back(p.second);
        }
    }
    return str;
  } 
};
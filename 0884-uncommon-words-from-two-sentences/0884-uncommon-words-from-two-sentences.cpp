class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
    std::istringstream iss(s1);
    vector<std::string> words1;
    string word;
    while (iss >> word) { 
        words1.push_back(word);
    }
     std::istringstream iss1(s2);
    vector<std::string>words2;
    while (iss1 >> word) {
        words2.push_back(word);
    }
    map<string,int>m1;
    map<string,int>m2;
    for (int i=0;i<words1.size();i++){
        m1[words1[i]]+=1;
      }
       for (int i=0;i<words2.size();i++){
        m2[words2[i]]+=1;
      }
      vector<string>vec;
      for (int i=0;i<words1.size();i++){
        if (m1[words1[i]]==1 && m2[words1[i]]==0)
        vec.push_back(words1[i]);
      }
       for (int i=0;i<words2.size();i++){
        if (m2[words2[i]]==1 && m1[words2[i]]==0)
        vec.push_back(words2[i]);
      }
      return vec;
    }
};
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>m;
        for (int i=0;i<strs.size();i++) {
            string str=strs[i];
            sort(str.begin(),str.end());
            m[str].push_back(strs[i]);
        }
        vector<vector<string>>vec;
        for (auto &p:m) {
            vec.push_back(p.second);
        }
        return vec;
    }
};
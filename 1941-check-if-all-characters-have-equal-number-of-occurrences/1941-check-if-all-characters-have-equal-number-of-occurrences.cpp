class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>m;
        for (int i=0;i<s.length();i++){
            m[s[i]]+=1;
        }
        set<char>st;
        for (int i=0;i<s.length();i++){
            st.insert(s[i]);
        }
        vector<char>arr(st.begin(),st.end());
        int value=m[arr[0]];
        for (int i=1;i<arr.size();i++){
            if (m[arr[i]]!=value){
                return false;
            }
        }
        return true;
    }
};
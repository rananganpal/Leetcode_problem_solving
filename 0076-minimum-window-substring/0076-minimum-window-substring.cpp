class Solution {
public:
    string minWindow(string s, string t) {
        int mini=INT_MAX,startindex=-1;
        unordered_map<char,int>m;
        int l=0,r=0,count=0;
        int n=s.length(),len=t.length();
        for (char c:t) m[c]++;
        while (r<n){
            if (m[s[r]]>0) count++;
            m[s[r]]--;
            while (count==len){
                if (mini>r-l+1){
                    mini=r-l+1; startindex=l;
                }
                m[s[l]]++;
                if (m[s[l]]>0) count--;
                l++;
            }
            r++;
        }
        return startindex==-1?"":s.substr(startindex,mini);
    }
};
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string>st(wordList.begin(),wordList.end());
        queue<pair<string,int>>q;
        q.push({beginWord,1});
        st.erase(beginWord);
        while (!q.empty()){
            string str=q.front().first;
            int dist=q.front().second;
            q.pop();
            if (str==endWord) return dist;
            for (int i=0;i<str.size();i++){
                char temp=str[i];
                for (char ch='a';ch<='z';ch++){
                    str[i]=ch;
                    if (st.find(str)!=st.end()){
                        q.push({str,dist+1});  st.erase(str);
                    }
                }
                str[i]=temp;
            }
        }
        return 0;
    }
};
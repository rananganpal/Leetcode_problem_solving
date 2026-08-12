class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {
        unordered_set<string>st(bank.begin(),bank.end());
        queue<pair<string,int>>q;
        q.push({startGene,0});
        st.erase(startGene);
        string gene="ATGC";
        while (!q.empty()){
            string str=q.front().first;
            int steps=q.front().second;
            q.pop();
            if (str==endGene) return steps;
            for (int i=0;i<str.length();i++){
                char ch=str[i];
               for (char c:gene){
                if (c==ch) continue;
                str[i]=c;
                if (st.find(str)!=st.end()){
                    q.push({str,steps+1}); st.erase(str);
                }
               }
                str[i]=ch;
            }
        }
        return -1;
    }
};
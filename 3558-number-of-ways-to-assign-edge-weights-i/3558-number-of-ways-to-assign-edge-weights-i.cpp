class Solution {
public:
    static const int MOD=1e9+7;
    int assignEdgeWeights(vector<vector<int>>& edges) {
        int n=edges.size()+1;
        vector<vector<int>>adj(n+1);
        for (auto &e:edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        vector<bool>vis(n+1,false);
        queue<pair<int,int>>q;
        q.push({1,0});
        vis[1]=true;
        int maxDepth=0;
        while (!q.empty()) {
            auto [node,depth]=q.front();
            q.pop();
            maxDepth=max(maxDepth,depth);
            for (int nei:adj[node]) {
                if (!vis[nei]) {
                    vis[nei]=true;
                    q.push({nei,depth+1});
                }
            }
        }
        if (maxDepth==0) return 0;
        long long result=1;
        long long base=2;
        int exp=maxDepth-1;
        while (exp>0) {
            if (exp&1) result=(result*base)%MOD;
            base = (base*base)%MOD;
            exp>>=1;
        }
        return result;
    }
};
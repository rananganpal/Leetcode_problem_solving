class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times,int n,int k) {
        vector<vector<pair<int,int>>> adj(n+1);
        for (auto &edge:times) {
            int u=edge[0];
            int v=edge[1];
            int w=edge[2];
            adj[u].push_back({v, w});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<int>dist(n+1,INT_MAX);
        dist[k]=0;
        pq.push({0,k});
        while (!pq.empty()) {
            auto it=pq.top();
            pq.pop();
            int d=it.first;
            int u=it.second;
            if (d>dist[u]) continue;
            for (auto &nbr:adj[u]) {
                int v=nbr.first;
                int wt=nbr.second;
                if (dist[u]+wt<dist[v]) {
                    dist[v]=dist[u]+wt;
                    pq.push({dist[v],v});
                }
            }
        }
        int ans=0;
        for (int i=1;i<=n;i++) {
            if (dist[i]==INT_MAX) return -1;
            ans=max(ans,dist[i]);
        }
        return ans;
    }
};
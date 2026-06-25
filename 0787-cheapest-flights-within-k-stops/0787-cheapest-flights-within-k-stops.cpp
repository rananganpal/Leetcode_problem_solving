class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int>dist(n,INT_MAX);
        dist[src]=0;
        for (int i=0;i<k+1;i++){
            vector<int>temp=dist;
            for (auto& p:flights){
                int u=p[0],v=p[1],cost=p[2];
                if (dist[u]==INT_MAX) continue;
                temp[v]=min(temp[v],dist[u]+cost);
            }
            dist=temp;
        }
        return (dist[dst]==INT_MAX)?-1:dist[dst];
    }
};
class Solution {
public:
    vector<int>parent,rank;
    int find(int x) {
        if (parent[x]==x)
            return x;
        return parent[x]=find(parent[x]);
    }
    void unite(int x,int y) {
        int px=find(x);
        int py=find(y);
        if (px==py)
            return;
        if (rank[px]<rank[py])
            swap(px,py);
        parent[py]=px;
        if (rank[px]==rank[py])
            rank[px]++;
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if (connections.size()<n-1)
            return -1;
        parent.resize(n);
        rank.assign(n,0);
        for (int i=0;i<n;i++)
            parent[i]=i;
        int components=n;
        for (auto &e : connections) {
            int u=e[0],v=e[1];
            if (find(u)!=find(v)) {
                unite(u,v);
                components--;
            }
        }
        return components-1;
    }
};
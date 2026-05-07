class Solution {
public:
  vector<int>p;
    int find(int x) {
        if (p[x]!=x)
            p[x]=find(p[x]);
        return p[x];
    }
    bool unite(int a,int b) {
        int pa=find(a);
        int pb=find(b);
        if (pa==pb) return false;
        p[pa]=pb;
        return true;
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
         int n=edges.size();
        p.resize(n+1);
        for (int i=1;i<=n;i++)
            p[i]=i;
        for (auto &e:edges) {
            int u=e[0],v=e[1];
            if (!unite(u,v)) {
                return e;
            }
        }
        return {};
    }
};
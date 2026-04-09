class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
       for (auto &edge:edges) {
       int u=edge[0];
       int v=edge[1];
      adj[u].push_back(v);
      adj[v].push_back(u);
   }
   int count=0;
   vector<bool>vec(n,false);
   for (int i=0;i<n;i++){
    if (vec[i]==true) continue;
    queue<int>q;
    q.push(i);
    vec[i]=true;
     int nodes=0;
     int edgesCount=0;
    while (!q.empty()){
        int val=q.front();  q.pop();
        int size=adj[val].size();
          nodes++;
        edgesCount+=adj[val].size();
        for (int k=0;k<size;k++){
            if (vec[adj[val][k]]==false){
                vec[adj[val][k]]=true; q.push(adj[val][k]);
            }
        }
    }
    edgesCount/=2;
    if (edgesCount==(nodes*(nodes-1))/2) count++;
   }
   return count;
    }
};
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n=numCourses;
        vector<vector<int>>adj(n);
        vector<int>indegree(n,0);
        for (auto &it:prerequisites){
            int a=it[0],b=it[1];
            adj[a].push_back(b);
            adj[b].push_back(a);
            indegree[b]++;
        }
        queue<int>q;
        for (int i=0;i<n;i++){
            if (indegree[i]==0) q.push(i);
        }
        int count=0;
        while (!q.empty()){
            int value=q.front();
            q.pop();
            count++;
            for (int i=0;i<adj[value].size();i++){
                indegree[adj[value][i]]--;
                if (indegree[adj[value][i]]==0) q.push(adj[value][i]);
            }
        }
        return count==n;
    }
};
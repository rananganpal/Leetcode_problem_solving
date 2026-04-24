class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool>visited(n,false);
        queue<int>q;
        q.push(0);  visited[0]=true;
        while (!q.empty()){
            int val=q.front(); q.pop();
            int size=rooms[val].size();
            for (int i=0;i<size;i++){
                if (visited[rooms[val][i]]==false){
                    visited[rooms[val][i]]=true; q.push(rooms[val][i]);
                }
            }
        }
        for (int i=0;i<n;i++){
            if (visited[i]==false) return false; 
        }
        return true;
    }
};
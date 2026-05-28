class Solution {
public:
  int f(int a,int b){
    return a*a+b*b;
  }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,vector<int>>>pq;
        vector<vector<int>>vec;
        for (int i=0;i<points.size();i++){
            pq.push({f(points[i][0],points[i][1]),points[i]});
            if (pq.size()>k) pq.pop();
        }
        while (!pq.empty()){
            vec.push_back(pq.top().second);
            pq.pop();
        }
        return vec;
    }
};
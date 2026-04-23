class Solution {
public:
    int edgeScore(vector<int>& edges) {
        unordered_map<int,long long>m;
        for (int i=0;i<edges.size();i++){
            m[edges[i]]+=i;
        }
         long long maxi=-1;
        int ans=INT_MAX;
        for (auto& pair:m){
            if (pair.second>maxi || (pair.second==maxi && pair.first<ans)) {
                   ans=pair.first;
                 maxi=pair.second;
            }
        }
        return ans;
    }
};
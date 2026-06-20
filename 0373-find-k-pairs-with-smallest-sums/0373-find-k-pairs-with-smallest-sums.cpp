class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>>vec;
        if (nums1.size()==0 || nums2.size()==0 || k==0) return vec;
        using t=tuple<int,int,int>;
        priority_queue<t,vector<t>,greater<t>>pq;
        for (int i=0;i<nums1.size();i++){
            pq.push({nums1[i]+nums2[0],i,0});
        }
        while (k-->0 && !pq.empty()){
            auto [sum,i,j]=pq.top();
            pq.pop();
            vec.push_back({nums1[i],nums2[j]});
            if (j+1<nums2.size()) pq.push({nums1[i]+nums2[j+1],i,j+1});
        }
        return vec;
    }
};
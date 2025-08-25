class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        std::unordered_set<int> set1(nums1.begin(), nums1.end());
        std::unordered_set<int> intersectionSet; 
        for (int num : nums2) {
            if (set1.find(num) != set1.end()) { 
                intersectionSet.insert(num); 
            }
        }
        vector<int>vec(intersectionSet.begin(), intersectionSet.end());
        if (vec.size()==0){
            return -1;
        }
        sort(vec.begin(),vec.end());
        return vec[0];
    }
};
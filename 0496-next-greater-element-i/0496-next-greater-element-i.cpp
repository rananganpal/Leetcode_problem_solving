class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>m;
        for (int i=0;i<nums2.size();i++) m[nums2[i]]=i;
        vector<int>ans(nums1.size(),0);
        for (int i=0;i<nums1.size();i++){
            int p=0;
            int index=m[nums1[i]];
            for (int j=index+1;j<nums2.size();j++){
                if (nums2[j]>nums1[i]){
                    ans[i]=nums2[j]; p=1;
                    break;
                }
            }
            if (p==0) ans[i]=-1;
        }
        return ans;
    }
};
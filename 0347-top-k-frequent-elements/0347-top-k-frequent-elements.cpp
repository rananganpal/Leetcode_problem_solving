class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if (nums.size()==1){
            return nums;
        }
        int y=-pow(10,4)-10;
        int x=2*pow(10,4)+2;
        vector<int>arr(x,0);
        x=pow(10,4);
        for (int i=0;i<nums.size();i++){
            arr[nums[i]+x]+=1;
        }
        vector<int>vec;
        for (int i=0;i<k;i++){
            auto m=max_element(arr.begin(),arr.end());
            int index=distance(arr.begin(),m);
            vec.push_back(index-x);
            arr[index]=y;
        }
        return vec;
    }
};
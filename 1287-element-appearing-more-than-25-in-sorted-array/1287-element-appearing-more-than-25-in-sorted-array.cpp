class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        vector<int>vec(100001,0);
        int n=arr.size();
        for (int i=0;i<n;i++){
            vec[arr[i]]+=1;
        }
         auto maxElementIt = max_element(vec.begin(), vec.end());
        int index = distance(vec.begin(), maxElementIt);
        return index;
    }
};
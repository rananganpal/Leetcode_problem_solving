class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int>arr(101,0);
        int sum=0;
        for (int i=0;i<nums.size();i++){
            arr[nums[i]]+=1;
        }
         auto max_it = std::max_element(arr.begin(), arr.end());
    int max_index = std::distance(arr.begin(), max_it);
    int a=arr[max_index];
    for (int i=0;i<101;i++){
       if (a==arr[i]){
        sum+=arr[i];
       }
     }
     return sum;
    }
};
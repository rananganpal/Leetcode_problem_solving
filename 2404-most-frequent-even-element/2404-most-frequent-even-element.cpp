class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int count=0;
     int n=pow(10,5)+1;
     vector<int>arr(n,0);
     for (int i=0;i<nums.size();i++){
         if (nums[i]%2==0){
            count++;
        arr[nums[i]]+=1;
         }
     }
     if (count==0){
        return -1;
     }
     auto max_it = std::max_element(arr.begin(), arr.end());
    int max_index = std::distance(arr.begin(), max_it);
    return max_index;
  }
};
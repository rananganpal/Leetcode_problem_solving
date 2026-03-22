class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        long long sum=0;
        int maxi=-1;
        vector<int>arr(nums.size());
        for (int i=0;i<nums.size();i++){
            maxi=max(nums[i],maxi);
            arr[i]=gcd(maxi,nums[i]);
        }
        sort(arr.begin(),arr.end());
        int left=0,right=nums.size()-1;
        while (left<right){
            sum+=gcd(arr[left],arr[right]);
            left++;  right--;
        }
        return sum;
    }
};
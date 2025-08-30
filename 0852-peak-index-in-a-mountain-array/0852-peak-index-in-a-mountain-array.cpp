class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=0,end=arr.size()-1;
        while (start<=end){
        int mid=(start+end)/2;
        if (end-start==1){
            return (arr[end]>arr[start])?end:start;
        } 
        if (arr[mid-1]<arr[mid] && arr[mid]<arr[mid+1]){
            start=mid+1;
        } else if (arr[mid-1]>arr[mid] && arr[mid]>arr[mid+1]){
            end=mid-1;
        } else {
           return mid;
        }
      }
      return 1;
    }
};
int f(int p,vector<int>&arr,int n){
    int a=1;
    for (int i=0;i<n;i++){
        if (arr[i]==p){
            a=0;
            break;
        } else {
            a=1;
        }
    }
    if (a==0){
        return 0;
    }
    if (a==1){
        return 1;
    }
    return 0;
}
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>vec;
        for (int i=1;i<=100000;i++){
            if (f(i,arr,arr.size())){
                 vec.push_back(i);
            }
        }
        return vec[k-1];
    }
};
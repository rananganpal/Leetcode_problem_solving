class Solution {
public:
    int maxProduct(int n) {
        int num=n,count=0;
        while (num!=0){
            count++;
            num/=10;
        }
        num=n;
        vector<int>arr(count,0);
        for (int i=count-1;i>=0;i--){
            arr[i]=num%10;
            num/=10;
        }
        sort(arr.begin(),arr.end());
        return arr[count-2]*arr[count-1];
    }
};
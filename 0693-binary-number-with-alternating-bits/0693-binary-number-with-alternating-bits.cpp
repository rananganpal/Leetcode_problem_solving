class Solution {
public:
    bool hasAlternatingBits(int n) {
        if (n==1){
            return true;
        }
        int num=n;
         vector<int>vec;
         while (num!=0){
            vec.push_back(num%2);
            num/=2;
         }
         vector<int>arr(vec.size(),0);
         for (int i=0;i<vec.size();i++){
            arr[i]=vec[vec.size()-1-i];
         }
         int a=0;
         for (int i=0;i<arr.size();i++){
            if (i%2==0){
                if (arr[i]==1){
                    a=1;
                } else {
                    a=0; break;
                }
            } else {
                if (arr[i]==0){
                    a=1;
                } else {
                    a=0; break;
                }
            }
         }
         if (a==1){
            return true;
         }
         return false;
    }
};
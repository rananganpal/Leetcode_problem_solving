class Solution {
public:
    int minAllOneMultiple(int k) {
        if (k%2==0 || k%5==0) return -1;
        int sum=1;
        for (int i=0;i<k;i++){
           if (sum%k==0) return i+1;
            sum=((sum%k)*10+1)%k;
        }
        return -1;
    }
};
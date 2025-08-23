class Solution {
public:
    int countDigits(int num) {
        int n=num,count=0;
        if (num>=1 && num<=9){
            return 1;
        }
        while (n!=0){
           if (n%10==0){
            count+=0;
            n/=10;
           }
           if (num%(n%10)==0){
            count+=1;
           }
           n/=10;
        }
        return count;
    }
};
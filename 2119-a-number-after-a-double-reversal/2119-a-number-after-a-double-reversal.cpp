int count(int num){
    int c=0;
    if (num>=0 && num<=9){
        return 1;
    }
    while (num!=0){
        c++; num/=10;
    }
    return c;
}
class Solution {
public:
    bool isSameAfterReversals(int num) {
        int reverce1=0,x=count(num),n=num;
        for (int i=0;i<x;i++){
            reverce1+=(num%10)*pow(10,x-1-i);
            num/=10;
        }
        int y=count(reverce1),reverce2=0;
        for (int i=0;i<y;i++){
             reverce2+=(reverce1%10)*pow(10,y-1-i);
             reverce1/=10;
        }
        return n==reverce2;
    }
};
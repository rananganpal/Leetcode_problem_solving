class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int p=purchaseAmount;
        if (p==0){
            return 100;
        }
        if (p%10==0){
           return 100-p;
        }
        if (p%5==0 && p%10!=0){
            return 95-p;
        }
        if (p%10>5){
            int x=p/10;
            x=x*10;
            return 100-10-x;
        }
        int x=p/10;
        x=x*10;
        return 100-x;
            return 90-(p/10)*10;
    }
};
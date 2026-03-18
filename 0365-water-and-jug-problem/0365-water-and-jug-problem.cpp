class Solution {
public:
    bool canMeasureWater(int x, int y, int target) {
        int d=gcd(x,y);
        return target%d==0 &&  target<=x+y;
    }
};
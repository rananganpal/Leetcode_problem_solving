class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>arr(2,0.0);
        double kel=celsius+273.15;
        double fer=celsius*1.80+32.00;
        kel=round(kel*100000)/100000;
        fer=round(fer*100000)/100000;
        arr[0]=kel;
        arr[1]=fer;
        return arr;
    }
};
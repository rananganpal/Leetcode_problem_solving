class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string>arr;
        for (int j=2;j<=n;j++){
            for (int i=1;i<j;i++){
             if (gcd(i,j)==1){
               arr.push_back(to_string(i) + "/" + to_string(j));
              }
            }
        }
        return arr;
    }
    private:
    int gcd(int a,int b){
         while (b) {
            int t=a%b;
            a=b;
            b=t;
        }
        return a;
     }
};
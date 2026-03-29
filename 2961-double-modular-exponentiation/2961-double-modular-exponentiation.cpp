class Solution {
public:
   long long f(long long x,long long n,long long mod){
    long long result=1;
        x%=mod;
        while (n>0) {
            if (n%2==1)
                result=(result*x)%mod;
            x=(x*x)%mod;
            n/=2;
        }
        return result;
    }
    vector<int> getGoodIndices(vector<vector<int>>& variables, int target) {
        vector<int>vec;
      for (int i=0;i<variables.size();i++){
        long long a=variables[i][0],b=variables[i][1],c=variables[i][2],m=variables[i][3];
          long long x=f(a,b,10);
          long long y=f(x,c,m);
          if (y==target) vec.push_back(i);
      }
      return vec;
    }
};
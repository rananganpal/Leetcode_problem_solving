class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        if (k==0){
            for (int i=0;i<code.size();i++){
                code[i]=0;
            }
            return code;
        }
        int n=code.size();
        vector<int>vec(n,0);
        if (k>0){
            int sum=0;
          for (int i=1;i<=k;i++){
            sum+=code[i];
          }
          vec[0]=sum;
          for (int i=1;i<n;i++){
            sum=sum-code[i]+code[(i+k)%n];
            vec[i]=sum;
          }
          return vec;
        }
        int sum=0;
        for (int i=n-1;i>=n+k;i--){
          sum+=code[i];
        }
        vec[0]=sum;
        for (int i=1;i<n;i++){
            sum=sum-code[(i+k+n-1)%n]+code[(i-1+n)%n];
            vec[i]=sum;
        }
        return vec;
    }
};
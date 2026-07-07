class Solution {
public:
    long long sumAndMultiply(int n) {
        long long con=0,sum=0;
        if (n==0) return 0;
        string temp=to_string(n);
        for (int i=0;i<temp.length();i++){
            if (temp[i]=='0') continue;
            con=con*10+(temp[i]-'0');
            sum+=(temp[i]-'0');
        }
        return con*sum;
    }
};
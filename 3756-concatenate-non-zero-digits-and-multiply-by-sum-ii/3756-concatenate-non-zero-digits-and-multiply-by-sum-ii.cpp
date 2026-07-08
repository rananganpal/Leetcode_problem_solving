class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
       const int mod=1e9+7;
        int n=s.length();
        vector<int>prefixsum(n,0);
        prefixsum[0]=s[0]-'0';
        for(int i=1;i<n;i++)
            prefixsum[i]=prefixsum[i-1]+(s[i]-'0');
        vector<long long>pow10(n+1);
        pow10[0]=1;
        for(int i=1;i<=n;i++)
            pow10[i]=(pow10[i-1]*10)%mod;
        vector<long long>con(n,0);
        vector<int>count(n,0);
        if(s[0]!='0'){
            con[0]=s[0]-'0';
            count[0]=1;
        }
        for(int i=1;i<n;i++){
            con[i]=con[i-1];
            count[i]=count[i-1];
            if(s[i]!='0'){
                con[i]=(con[i]*10+(s[i]-'0'))%mod;
                count[i]++;
            }
        }
        vector<int>ans;
        for(auto&q:queries){
            int l=q[0],r=q[1];
            long long sum=prefixsum[r];
            if(l>0)
                sum-=prefixsum[l-1];
            long long x;
            if(l==0)
                x=con[r];
            else{
                int k=count[r]-count[l-1];
                x=(con[r]-(con[l-1]*pow10[k])%mod+mod)%mod;
            }
            ans.push_back((x*(sum%mod))%mod);
        }
        return ans;
    }
};
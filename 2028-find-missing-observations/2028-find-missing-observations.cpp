class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m=rolls.size();
        int s=0;
        for (int i=0;i<m;i++) s+=rolls[i];
        int sum=mean*(m+n)-s;
        if (sum<n || sum>6*n) {
        return {}; 
        }
    vector<int> a(n,1);
    int remaining=sum-n;
    for (int i=0;i<n && remaining>0;i++) {
        int add=min(5, remaining);
        a[i]+=add;
        remaining-=add;
    }
      return a;
    }
};
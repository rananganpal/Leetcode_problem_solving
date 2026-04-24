class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n=moves.length();
        int c_l=0,c_r=0,c__=0;
        for (int i=0;i<n;i++){
            if (moves[i]=='L') c_l++;
            if (moves[i]=='R') c_r++;
        }
        c__=n-(c_l+c_r);
        if (c_l>c_r) return n-2*c_r;
        if (c_l<c_r) return n-2*c_l;
        return n-(c_l+c_r);
    }
};
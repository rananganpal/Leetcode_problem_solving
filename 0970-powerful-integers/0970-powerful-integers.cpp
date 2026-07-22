class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        vector<int>xpowers,ypowers;
        long long val=1;
        while (val<=bound) {
            xpowers.push_back(val);
            if (x==1) break;
            val*=x;
        }
        val=1;
        while (val<=bound) {
            ypowers.push_back(val);
            if (y==1) break;
            val*=y;
        }
        unordered_set<int>st;
        for (int a:xpowers) {
            for (int b:ypowers) {
                if (a+b<=bound)
                    st.insert(a+b);
            }
        }
        return vector<int>(st.begin(),st.end());
    }
};
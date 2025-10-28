class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        set<int>s;
        for (int i=0;i<n;i++){
            s.insert(candyType[i]);
        }
        int typenum=s.size();
        if (typenum==1){
            return 1;
        }
        if (n/2>typenum){
            return typenum;
        }
        return n/2;
    }
};
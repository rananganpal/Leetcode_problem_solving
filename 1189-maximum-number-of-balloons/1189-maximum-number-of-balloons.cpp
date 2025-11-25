class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int>m;
        for (int i=0;i<text.length();i++){
            m[text[i]]+=1;
        }
        if (m['l']<2 || m['o']<2 || m['a']<1 || m['b']<1 || m['n']<1) return 0;
        int count=0;
        while (m['l']>=2 && m['o']>=2 && m['a']>=1 && m['b']>=1 && m['n']>=1){
              count+=1;
              m['l']-=2; m['o']-=2;
              m['a']--; m['b']--; m['n']--;
        }
        return count;
    }
};
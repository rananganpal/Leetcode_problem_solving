class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string>vecs(score.size(),"");
        if (score.size()==1){
            vecs[0]="Gold Medal";
            return vecs;
        }
        if (score.size()==2){
            auto m=max_element(score.begin(),score.end());
          int index=distance(score.begin(),m);
          vecs[index]="Gold Medal";
        score[index]=-2;
         m=max_element(score.begin(),score.end());
        index=distance(score.begin(),m);
        vecs[index]="Silver Medal";
        score[index]=-3;
        return vecs;
        }
          auto m=max_element(score.begin(),score.end());
          int index=distance(score.begin(),m);
          vecs[index]="Gold Medal";
        score[index]=-2;
        m=max_element(score.begin(),score.end());
        index=distance(score.begin(),m);
        vecs[index]="Silver Medal";
        score[index]=-3;
        m=max_element(score.begin(),score.end());
        index=distance(score.begin(),m);
        vecs[index]="Bronze Medal";
        score[index]=-4;
        for (int i=3;i<score.size();i++){
          m=max_element(score.begin(),score.end());
          index=distance(score.begin(),m);
          vecs[index]=to_string(i+1);
          score[index]=(-1)*(i+2);
        }
        return vecs;
    }
};
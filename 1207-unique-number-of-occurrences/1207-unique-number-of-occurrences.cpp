class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set<int>s;
        for (int i=0;i<arr.size();i++){
            s.insert(arr[i]);
        }
        vector<int>vec_unique(s.begin(),s.end());
        vector<int>o(vec_unique.size(),0);
        for (int i=0;i<vec_unique.size();i++){
            int count=0;
            for (int j=0;j<arr.size();j++){
                if (arr[j]==vec_unique[i]){
                    count++;
                }
            }
            o[i]=count;
        }
        set<int>s1;
        for (int i=0;i<o.size();i++){
            s1.insert(o[i]);
        }
        if (o.size()==s1.size()){
            return true;
        }
        return false;
    }
};
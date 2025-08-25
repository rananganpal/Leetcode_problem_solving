class Solution {
public:
    int binaryGap(int n) {
      int num=n;
      vector<int>vec1;
      while (num!=0){
        vec1.push_back(num%2);
        num/=2;
      }
        vector<int>vec(vec1.size(),0);
        for (int i=0;i<vec1.size();i++){
            vec[i]=vec1[vec1.size()-1-i];
        }
        int count=0;
        for (int i=0;i<vec.size();i++){
            if (vec[i]==1){
                count++;
            }
        }
        vector<int>arr(count,0);
        int p=0;
        for (int i=0;i<vec.size();i++){
            if (vec[i]==1){
                arr[p++]=i;
            }
        }
        int r=0;
        for (int i=0;i<count-1;i++){
            int s=arr[i+1]-arr[i];
            if (s>r){
                r=s;
            }
        }
        return r;
    }
};
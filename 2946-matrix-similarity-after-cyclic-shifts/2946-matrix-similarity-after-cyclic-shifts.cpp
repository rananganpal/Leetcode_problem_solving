class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int m=mat.size(),n=mat[0].size();
        if (k>=n && k%n==0) return true;
        int step=k%n;
          for (int i=0;i<m;i++) {
            vector<int>temp=mat[i];
            for (int s=0;s<step;s++) {
                if (i%2==0){
                    int first=temp[0];
                    for (int j=0;j<n-1;j++) {
                        temp[j]=temp[j+1];
                    }
                    temp[n-1]=first;
                } else {
                    int last=temp[n-1];
                    for (int j=n-1;j>0;j--) {
                        temp[j]=temp[j-1];
                    }
                    temp[0]=last;
                }
            }
            if (temp!=mat[i]) return false;
        }
        return true;
    }
};
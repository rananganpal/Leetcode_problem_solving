class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>arr(n,0);
        if (n%2!=0){
            int x=1,y=1;
            arr[n/2]=0;
            for (int i=n/2-1;i>=0;i--){
                arr[i]=x*(-1);
                x++;
            }
            for (int i=n/2+1;i<n;i++){
                arr[i]=y*(1);
                y++;
            }
        } else {
           int x=1,y=1;
           for (int i=n/2;i<n;i++){
             arr[i]=x;
             x++;
           }
           for (int i=n/2-1;i>=0;i--){
            arr[i]=y*(-1);
            y++;
           }
        }
        return arr;
    }
};
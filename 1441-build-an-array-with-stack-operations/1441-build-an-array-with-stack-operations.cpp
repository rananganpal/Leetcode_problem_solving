class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<int>stack(n,0);
        int top=-1;
        vector<string>vec;
        int i=0,j=1;
        while (i<target.size() && j<=n){
            top++;
            stack[top]=j; vec.push_back("Push");
            j+=1;
            if (target[i]!=stack[top]){
                top--;
                vec.push_back("Pop");
                 
            } else {
                i++;
            }
        }
        return vec;
    }
};
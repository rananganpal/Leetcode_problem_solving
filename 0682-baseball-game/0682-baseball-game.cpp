class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>vec(100000,0);
        int top=-1,sum=0;
        for (int i=0;i<operations.size();i++){
            if (operations[i]=="+"){
                if (top>0){
                    top++;
                    vec[top]=vec[top-1]+vec[top-2];
                }
            } else if (operations[i]=="C") top--;
            else if (operations[i]=="D"){
                if (top>-1){
                    top++;
                    vec[top]=2*vec[top-1];
                }
            }
            else {
                top++;
                int value=stoi(operations[i]);
                vec[top]=value;
            }
        }
        for (int i=0;i<=top;i++){
            sum+=vec[i];
        }
        return sum;
    }
};
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        vector<string>stack(n,"");
        int top=-1;
        for (int i=0;i<n;i++){
            if (tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                 if (top>0){
                 int n1=stoi(stack[top-1]),n2=stoi(stack[top]);
                 if (tokens[i]=="+"){
                    int n=n1+n2;
                    string temp=to_string(n);
                    top--;
                    stack[top]=temp;
                  } else if (tokens[i]=="-"){
                    int n=n1-n2;
                    string temp=to_string(n);
                    top--;
                    stack[top]=temp;
                  } else if (tokens[i]=="*"){
                    int n=n1*n2;
                    string temp=to_string(n);
                    top--;
                    stack[top]=temp;
                  } else {
                    int n=n1/n2;
                    string temp=to_string(n);
                    top--;
                    stack[top]=temp;
                  }
                 }
            } else {
                top++;
                stack[top]=tokens[i];
            }
        }
        int num=stoi(stack[top]);
        return num;
    }
};
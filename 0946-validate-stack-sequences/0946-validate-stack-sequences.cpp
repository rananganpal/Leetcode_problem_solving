class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
     vector<int> arr(pushed.size());
        int top = -1; 
        int j = 0;    
        
        for (int i = 0; i < pushed.size(); i++) {
            arr[++top] = pushed[i];
            while (top >= 0 && arr[top] == popped[j]) {
                top--;
                j++;
            }
        }
        return top == -1;
    }
};
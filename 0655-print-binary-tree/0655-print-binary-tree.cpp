/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   int height(TreeNode* root) {
    if (root==nullptr)  return 0;
    int leftHeight=height(root->left);
    int rightHeight=height(root->right);
    return 1+max(leftHeight,rightHeight);
  }
    vector<vector<string>> printTree(TreeNode* root) {
        int m=height(root);
        int n=pow(2,m)-1;
        queue<tuple<TreeNode*,int,int>> q;
        vector<vector<string>>arr(m, vector<string>(n,""));
        arr[0][(n-1)/2]=to_string(root->val);
        q.push({root,0,(n-1)/2});
        while (!q.empty()){
            int size=q.size();
            for (int i=0;i<size;i++){
                auto [ptr,r,c]=q.front();
                q.pop();
                if (ptr->left){
                    arr[r+1][c-pow(2,m-r-2)]=to_string(ptr->left->val);
                    q.push({ptr->left,r+1,(c-pow(2,m-r-2))});
                }
                    if (ptr->right){
                     arr[r+1][c+pow(2,m-r-2)]=to_string(ptr->right->val);
                      q.push({ptr->right,r+1,(c+pow(2,m-r-2))});
                    }
            }
        }
        return arr;
    }
};
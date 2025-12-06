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
 int sum=0;
    int deepestLeavesSum(TreeNode* root) {
        int maxi=maxLevel(root);
        f(root,0,maxi);
        return sum;
    }
    int maxLevel(TreeNode* root) {
    if (root == nullptr)
        return -1;
    int leftLevel = maxLevel(root->left);
    int rightLevel = maxLevel(root->right);
    return 1 + max(leftLevel, rightLevel);
  }
  void f(TreeNode* ptr,int l,int maxi){
    if (ptr){
        if (ptr->left==NULL && ptr->right==nullptr){
            if (maxi==l) sum+=ptr->val;
            return ;
        } else if (ptr->right==nullptr){
          f(ptr->left,l+1,maxi);
        } else if (ptr->left==NULL){
            f(ptr->right,l+1,maxi);
        } else {
            f(ptr->left,l+1,maxi);
            f(ptr->right,l+1,maxi);
        }
    }
  }
};
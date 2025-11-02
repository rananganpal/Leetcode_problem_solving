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
    int sumOfLeftLeaves(TreeNode* root) {
        if (root->left==NULL && root->right==NULL){
            return 0;
        }
        if(root->left==NULL){
            f(root->right,root);
        }
        if (root->right==NULL){
            f(root->left,root);
        }
        if (root->left && root->right){
            f(root->left,root);
            f(root->right,root);
        }
        return sum;
    }
    void f(TreeNode* ptr,TreeNode* parant){
        if (ptr){
      if (ptr->left==NULL && ptr->right==NULL){
        if (parant->left==ptr){
            sum+=ptr->val;
            return;
        }
      }
      if (ptr->left==NULL){
        f(ptr->right,ptr);
      }
      if (ptr->right==NULL){
        f(ptr->left,ptr);
      }
      if (ptr->left && ptr->right){
        f(ptr->left,ptr);
        f(ptr->right,ptr);
      }
    }
    }
};
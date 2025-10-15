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
    bool evaluateTree(TreeNode* root) {
        if (root->right==NULL && root->left==NULL){
            if (root->val==1){
                return true;
            } 
            if (root->val==0){
                return false;
            }
        }
        int cheak=f(root);
        if (cheak==1){
            return true;
        }
        return false;
    }
    int f(TreeNode* ptr){
        if (ptr!=NULL){
         if (ptr->val==3||ptr->val==2){
            int a=f(ptr->left);
            int b=f(ptr->right);
            if (ptr->val==2){
                return a|b;
            } else {
                return a&b;
            }
         } else {
            if (ptr->val==0){
                return 0;
            } else {
                return 1;
            }
         }
        }
        return 1;
    }
};
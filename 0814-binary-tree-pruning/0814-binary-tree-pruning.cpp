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
    TreeNode* pruneTree(TreeNode* root) {
        if (f(root)) return nullptr;
        return root;
    }
    bool f(TreeNode* ptr){
        if (!ptr->left && !ptr->right) return ptr->val==0;
        if (ptr->left==NULL){
            if (f(ptr->right)) ptr->right=NULL;
            return ptr->right==nullptr && ptr->val==0;
        }
        if (ptr->right==NULL){
            if (f(ptr->left)) ptr->left=NULL;
            return ptr->left==nullptr && ptr->val==0;
        }
        if (ptr->left && ptr->right){
        if (f(ptr->left)) ptr->left=NULL;
        if (f(ptr->right)) ptr->right=NULL;
         return (ptr->left==nullptr && ptr->right==nullptr && ptr->val==0);
        }
        return true;
    }
};
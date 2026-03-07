/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
      return f(root,p,q);
    }
    TreeNode* f(TreeNode* ptr,TreeNode* p,TreeNode* q){
        if (ptr==nullptr) return nullptr;
        if (ptr==p || ptr==q) return ptr;
        TreeNode* l=f(ptr->left,p,q);
        TreeNode* r=f(ptr->right,p,q);
        if (l!=nullptr && r!=nullptr) return ptr;
        if (l==nullptr) return r;
        return l;
    }
};
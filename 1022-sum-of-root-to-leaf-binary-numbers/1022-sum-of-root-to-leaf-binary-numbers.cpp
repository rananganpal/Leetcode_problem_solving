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
    int sumRootToLeaf(TreeNode* root) {
        return f(root,0);
    }
    int f(TreeNode* ptr,int value){
        if (ptr==nullptr) return 0;
        value=value*2+ptr->val;
        if (ptr->left==nullptr && ptr->right==nullptr) return value;
        return f(ptr->left,value)+f(ptr->right,value);
    }
};
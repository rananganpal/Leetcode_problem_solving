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
  int count=0;
    int goodNodes(TreeNode* root) {
        if (!root->left && !root->right) return 1;
        f(root,INT_MIN);
        return count;
    }
    void f(TreeNode* ptr,int maxi){
        if (!ptr) return;
        if (ptr->val>=maxi) count++;
        int m=max(maxi,ptr->val);
        f(ptr->left,m);
        f(ptr->right,m); 
    }
};
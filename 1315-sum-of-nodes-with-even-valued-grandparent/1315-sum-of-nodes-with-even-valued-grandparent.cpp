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
      int dfs(TreeNode* node, int parent, int grandparent) {
        if (node==nullptr) return 0;
        int sum=0;
        if (grandparent%2==0) sum+=node->val;
        sum+=dfs(node->left,node->val,parent);
        sum+=dfs(node->right,node->val,parent);
        return sum;
    }
    int sumEvenGrandparent(TreeNode* root) {
        return dfs(root,1,1);
    }
};
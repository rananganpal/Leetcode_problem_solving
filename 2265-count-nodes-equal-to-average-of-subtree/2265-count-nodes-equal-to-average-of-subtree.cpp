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
    int result=0;
    pair<int,int>dfs(TreeNode* node) {
        if (!node) return {0,0};
        auto left=dfs(node->left);
        auto right=dfs(node->right);
        int sum=left.first+right.first+node->val;
        int count=left.second+right.second+1;  
        if (node->val==sum/count) {
            result+=1;
        }
        return {sum,count};
    }
    int averageOfSubtree(TreeNode* root) {
        dfs(root);
        return result;
    }
};
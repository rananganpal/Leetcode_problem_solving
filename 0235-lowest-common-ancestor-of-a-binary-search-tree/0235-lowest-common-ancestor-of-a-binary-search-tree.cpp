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
        int p_val=p->val;
        int q_val=q->val;
        TreeNode* ptr=root;
        while (ptr) {
            if (p_val<ptr->val && q_val<ptr->val) {
                ptr=ptr->left;
            }
            else if (p_val>ptr->val && q_val>ptr->val) {
                ptr=ptr->right;
            }
            else {
                return ptr;
            }
        }
        return nullptr;
    }
};
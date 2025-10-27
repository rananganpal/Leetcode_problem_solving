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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root==NULL){
            return false;
        }
        return f(root,0,targetSum);
    }
    bool f(TreeNode* ptr,int sum,int target){
            sum=sum+ptr->val;
            if (ptr->left==NULL && ptr->right==NULL){
                return sum==target;
            }
            if (ptr->left==NULL){
                return f(ptr->right,sum,target);
            }
            if (ptr->right==NULL){
                return f(ptr->left,sum,target);
            }
            return (f(ptr->left,sum,target) || f(ptr->right,sum,target));
    }
};
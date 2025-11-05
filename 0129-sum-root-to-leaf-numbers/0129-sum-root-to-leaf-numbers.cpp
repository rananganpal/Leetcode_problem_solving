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
    int sumNumbers(TreeNode* root) {
        if (root->left==NULL && root->right==NULL){
            return root->val;
        }
        f(root,0);
        return sum;
    }
    void f(TreeNode* ptr,int value){
        if (ptr){
            if (ptr->left==NULL && ptr->right==NULL){
                value=value*10+ptr->val;
                sum+=value;
                return;
            }
            if (ptr->left==NULL){
                value=value*10+ptr->val;
                f(ptr->right,value);
            }
            if (ptr->right==NULL){
                value=value*10+ptr->val;
                f(ptr->left,value);
            }
            if (ptr->right && ptr->left){
                value=value*10+ptr->val;
                f(ptr->left,value);
                f(ptr->right,value);
            }
        }
    }
};
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
    int findTilt(TreeNode* root) {
        if (root==NULL){
            return 0;
        }
        int s=f(root);
        func(root);
        return sum;
    }
    int f(TreeNode* ptr){
        if (ptr->left==NULL && ptr->right==NULL){
         int s1=0,s2=0,s3=ptr->val;
         ptr->val=abs(s1-s2);
         return s1+s2+s3;
        } if (ptr->left==NULL){
            int s1=0;
            int s2=f(ptr->right);
            int s3=ptr->val;
            ptr->val=abs(s1-s2);
            return s1+s2+s3;
        } if (ptr->right==NULL){
            int s1=f(ptr->left);
            int s2=0,s3=ptr->val;
            ptr->val=abs(s1-s2);
            return s1+s2+s3;
        }
        if (ptr->left!=NULL && ptr->right!=NULL){
            int s1=f(ptr->left);
            int s2=f(ptr->right);
            int s3=ptr->val;
            ptr->val=abs(s1-s2);
            return s1+s2+s3;
        }
        return 0;
    }
    void func(TreeNode* ptr){
        if (ptr!=NULL){
            func(ptr->left);
            sum+=ptr->val;
            func(ptr->right);
        }
    }
};
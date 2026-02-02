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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        f(root,1,val,depth);
        return root;
    }
    void f(TreeNode* ptr,int d,int value,int depth){
        if (ptr==nullptr) return;
        if (d==depth-1){
            TreeNode* l=ptr->left;
            TreeNode* r=ptr->right;
            TreeNode* leftnode=new TreeNode(value);
            TreeNode* rightnode=new TreeNode(value);
            ptr->left=leftnode;  ptr->right=rightnode;
            leftnode->left=l;  rightnode->right=r;
            return;
        }
        f(ptr->left,d+1,value,depth);
        f(ptr->right,d+1,value,depth);
    }
};
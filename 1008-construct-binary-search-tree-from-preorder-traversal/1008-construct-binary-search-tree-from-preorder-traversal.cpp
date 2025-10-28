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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root=new TreeNode(preorder[0]);
        if (preorder.size()==1){
            return root;
        }
        for (int i=1;i<preorder.size();i++){
          TreeNode* ptr=root,*ptr1;
          bool flag=true;
          int value=preorder[i];
          while (ptr && flag){
            if (value<ptr->val){
                ptr1=ptr; ptr=ptr->left;
            } else if (value>ptr->val){
                ptr1=ptr;ptr=ptr->right;
            } else {
                flag=false;
            }
          }
          if (!ptr && flag){
             if (ptr1->val<value){
                ptr1->right=new TreeNode(value);
             } else {
                ptr1->left=new TreeNode(value);
             }
          }
        }
        return root;
    }
};
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
    int kthSmallest(TreeNode* root, int k) {
        vector<int>vec;
        inorder(root,vec);
        if (vec.size()==1){
            return root->val;
        }
        return vec[k-1];
    }
    void inorder(TreeNode*ptr,vector<int>&vec){
        if (ptr!=NULL){
            inorder(ptr->left,vec);
            vec.push_back(ptr->val);
            inorder(ptr->right,vec);
        }
    }
};
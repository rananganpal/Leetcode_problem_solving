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
    bool isValidBST(TreeNode* root) {
        vector<int>vec;
        inorder(root,vec);
        for (int i=0;i<vec.size()-1;i++){
            if (vec[i]>=vec[i+1]){
                return false;
            }
        }
        return true;
    }
    void inorder(TreeNode*ptr,vector<int>&vec){
        if (ptr==NULL){
            return;
        }
        inorder(ptr->left,vec);
        vec.push_back(ptr->val);
        inorder(ptr->right,vec);
    }
};
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
    TreeNode* sufficientSubset(TreeNode* root, int limit) {
        if (!root->left && !root->right){
            if (root->val<limit) return nullptr;
        }
        f(root,0,limit);
        return root;
    }
    bool f(TreeNode* ptr,int sum,int limit){
        if (ptr==nullptr) return false;
        sum+=ptr->val;
        if (!ptr->left && !ptr->right){
            return sum<limit;
        } else if (ptr->left==nullptr){
            if (f(ptr->right,sum,limit)){
                ptr->right=NULL;
               return true;
            }
            return false;
        }
        else if (ptr->right==nullptr){
            if (f(ptr->left,sum,limit)){
                ptr->left=nullptr;
                return true;
            }
            return false;
        } 
        bool f1=false,f2=false;
          if (f(ptr->left,sum,limit)){
                ptr->left=nullptr;
                f1=true;
            }
              if (f(ptr->right,sum,limit)){
                ptr->right=nullptr; f2=true;
            }
            return (f1 && f2);
    }
};
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
 vector<string>vec;
    vector<string> binaryTreePaths(TreeNode* root) {
        if (root->left==NULL && root->right==NULL){
            vector<string>vec;
            vec.push_back("1");
            return vec;
        }
        string s=to_string(root->val);
        f(root->left,s);
        f(root->right,s);

        return vec;
    }
    void f(TreeNode* ptr,string str){
       if (ptr!=NULL){
        str=str+"->"+to_string(ptr->val);
        if (ptr->left==NULL && ptr->right==NULL){
            vec.push_back(str);
            return;
        }
        if (ptr->left==NULL){
            f(ptr->right,str);
            return;
        }
        if (ptr->right==NULL){
            f(ptr->left,str);
            return;
        }
        else {
            f(ptr->left,str);
            f(ptr->right,str);
        }
       }
    }
};
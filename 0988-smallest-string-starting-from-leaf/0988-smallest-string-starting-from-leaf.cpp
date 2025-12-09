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
    string smallestFromLeaf(TreeNode* root) {
        string str=f(root,"");
        return str;
    }
    string f(TreeNode* ptr,string s){
        if (ptr!=nullptr){
            if (ptr->left==nullptr && ptr->right==nullptr){
                s.insert(s.begin(),ptr->val+'a');
                return s;
            } else if (ptr->left==nullptr){
             s.insert(s.begin(),ptr->val+'a');
             return f(ptr->right,s);
            } else if (ptr->right==nullptr){
               s.insert(s.begin(),ptr->val+'a');
               return f(ptr->left,s);
            } else {
            s.insert(s.begin(),ptr->val+'a');
            string left=f(ptr->left,s);
            string right=f(ptr->right,s);
            if (left<right) return left;
            return right;
            }
        }
        return "";
    }
};
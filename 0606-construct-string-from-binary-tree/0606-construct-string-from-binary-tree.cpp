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
string str="";
    string tree2str(TreeNode* root) {
     string s= buildString(root);
      return s;
    }
    string buildString(TreeNode* node){
        if (!node) return "";
        
        string result = std::to_string(node->val);
        
        string left = buildString(node->left);
        string right = buildString(node->right);
        
        if (!left.empty() || !right.empty()) {
            result += "(" + left + ")";
        }
        if (!right.empty()) {
            result += "(" + right + ")";
        }
        
        return result;
    }
};
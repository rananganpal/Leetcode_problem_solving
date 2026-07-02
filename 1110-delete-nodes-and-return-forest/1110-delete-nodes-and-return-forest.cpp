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
   unordered_set<int>s;
   vector<TreeNode*>vec;
   TreeNode* dfs(TreeNode* ptr){
    if (ptr==nullptr) return NULL;
    ptr->left=dfs(ptr->left);
    ptr->right=dfs(ptr->right);
    if (s.count(ptr->val)){
        if (ptr->left) vec.push_back(ptr->left);
        if (ptr->right) vec.push_back(ptr->right);
        return NULL;
    }
    return ptr;
   }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        for (int x:to_delete) s.insert(x);
        root=dfs(root);
        if (root!=nullptr) vec.push_back(root);
        return vec;
    }
};
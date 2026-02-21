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
  vector<int>arr;
  int index=0;
    void recoverTree(TreeNode* root) {
        f(root);
        sort(arr.begin(),arr.end());
        rec(root);
    }
    void f(TreeNode* ptr){
      if (ptr==nullptr) return;
      f(ptr->left);
      arr.push_back(ptr->val);
      f(ptr->right);
    }
    void rec(TreeNode* p){
        if (p==nullptr) return;
        rec(p->left);
        p->val=arr[index++];
        rec(p->right);
    }
};
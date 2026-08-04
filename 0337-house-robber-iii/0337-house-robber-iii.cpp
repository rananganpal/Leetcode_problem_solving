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
  pair<int,int>f(TreeNode* ptr){
    if (ptr==nullptr) return {0,0};
    if (!ptr->left && !ptr->right) return {ptr->val,0};
    pair<int,int>l=f(ptr->left);
    pair<int,int>r=f(ptr->right);
    int prev1=l.first+r.first,prev2=l.second+r.second;
    int curr=max(prev1,prev2+ptr->val);
    prev2=prev1;
    prev1=curr;
    return {prev1,prev2};
  }
    int rob(TreeNode* root) {
        pair<int,int>ans=f(root);
        return ans.first;
    }
};
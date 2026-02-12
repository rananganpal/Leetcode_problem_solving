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
    int minDiffInBST(TreeNode* root) {
        inorder(root);
        int n=arr.size();
        int minDiff=INT_MAX;
        for (int i=1;i<n;i++) {
            minDiff=min(minDiff,arr[i]-arr[i-1]);
        }
        return minDiff;
    }
    void inorder(TreeNode* ptr){
        if (!ptr) return;
        inorder(ptr->left);
        arr.push_back(ptr->val);
        inorder(ptr->right);
    }
};
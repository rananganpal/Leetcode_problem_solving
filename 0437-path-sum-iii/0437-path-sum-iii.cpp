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
  unordered_map<long long,int>m;
  int count=0;
  void f(TreeNode* ptr,long long k,long long prefixsum){
    if (ptr==nullptr) return;
    prefixsum+=ptr->val;
    long long rem=prefixsum-k;
    count+=m[rem];
    m[prefixsum]++;
    f(ptr->left,k,prefixsum);
    f(ptr->right,k,prefixsum);
    m[prefixsum]--;
  }
    int pathSum(TreeNode* root, int targetSum) {
        m.clear();
        m[0]=1;
        int k=targetSum;
        f(root,k,0);
        return count;
    }
};
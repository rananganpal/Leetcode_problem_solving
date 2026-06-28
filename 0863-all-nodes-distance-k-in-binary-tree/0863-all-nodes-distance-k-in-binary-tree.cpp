/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
   unordered_map<TreeNode*,vector<TreeNode*>>m;
   void make_tree(TreeNode* ptr,TreeNode* parent){
    if (ptr==nullptr) return;
    if (parent){
        m[ptr].push_back(parent); m[parent].push_back(ptr);
    }
    make_tree(ptr->left,ptr);
    make_tree(ptr->right,ptr);
   }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        make_tree(root,nullptr);
        queue<pair<TreeNode*,int>>q;
        unordered_map<TreeNode*,bool>m1;
        vector<int>ans;
        q.push({target,0});
        m1[target]=true;
        while (!q.empty()){
            auto it=q.front();  q.pop();
            TreeNode* node=it.first;
            int dist=it.second;
            if (k==dist) ans.push_back(node->val);
            for (int i=0;i<m[node].size();i++){
                if (m1[m[node][i]]) continue;
                q.push({m[node][i],dist+1});
                m1[m[node][i]]=true;
            }
        }
        return ans;
    }
};
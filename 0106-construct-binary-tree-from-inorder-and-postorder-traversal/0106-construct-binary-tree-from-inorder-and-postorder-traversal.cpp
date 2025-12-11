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
  map<int,vector<int>>m;
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if (postorder.size()==1){
        TreeNode* root=new TreeNode(postorder[0]);
            return root;
        }
        for (int i=0;i<inorder.size();i+=1){
            m[inorder[i]].push_back(i);
        }
         for (int i=0;i<inorder.size();i+=1){
            m[postorder[i]].push_back(i);
        }
        TreeNode* root=f(inorder,postorder,0,inorder.size()-1);
        return root;
    }
        TreeNode* f(vector<int>&inorder,vector<int>&postorder,int low,int high){
       if (low>high) return NULL;
       if (low==high){
        TreeNode* ptr=new TreeNode(inorder[low]);
        return ptr;
       }
       int k=m[inorder[low]][1],index;
       for (int i=low+1;i<=high;i++){
        if (k<m[inorder[i]][1]) k=m[inorder[i]][1];
       }
        for (int i=low;i<=high;i++){
           if (k==m[inorder[i]][1]){
            index=i;  break;
           }
        }
        TreeNode* ptr=new TreeNode(inorder[index]);
        ptr->left=f(inorder,postorder,low,index-1);
        ptr->right=f(inorder,postorder,index+1,high);
        return ptr;
    }
};
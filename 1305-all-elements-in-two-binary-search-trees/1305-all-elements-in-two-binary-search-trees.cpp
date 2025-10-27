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
  vector<int>arr1;
  vector<int>arr2;
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        inorder1(root1);
        inorder2(root2);
        int size_arr1=arr1.size(),size_arr2=arr2.size();
        int temp1=0,temp2=0;
        vector<int>arr;
         while (temp1<size_arr1 && temp2<size_arr2){
            if (arr1[temp1]<=arr2[temp2]){
                arr.push_back(arr1[temp1]);
                temp1++;
            } else {
                arr.push_back(arr2[temp2]);
                temp2++;
            }
         }
         while (temp1<size_arr1){
             arr.push_back(arr1[temp1]);
                temp1++;
         }
             while (temp2<size_arr2){
             arr.push_back(arr2[temp2]);
                temp2++;
         }
         return arr;
    }
    void inorder1(TreeNode* ptr){
        if (ptr!=NULL){
            inorder1(ptr->left);
            arr1.push_back(ptr->val);
            inorder1(ptr->right);
        }
    }
    void inorder2(TreeNode* ptr){
        if (ptr!=NULL){
            inorder2(ptr->left);
            arr2.push_back(ptr->val);
            inorder2(ptr->right);
        }
    }
};
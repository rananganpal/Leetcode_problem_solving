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
    int findSecondMinimumValue(TreeNode* root) {
        vector<int>vec;
        f(root,vec);
        sort(vec.begin(),vec.end());
        set<int>st;
        for (int i=0;i<vec.size();i++){
            st.insert(vec[i]);
        }
        if (st.size()==1){
            return -1;
        }
        auto it=next(st.begin()); 
        int secondElement = *it;
        return secondElement;
    }
    void f(TreeNode* ptr,vector<int>&vec){
        if (ptr!=NULL){
            f(ptr->left,vec);
            vec.push_back(ptr->val);
            f(ptr->right,vec);
        }
        return;
    }
};
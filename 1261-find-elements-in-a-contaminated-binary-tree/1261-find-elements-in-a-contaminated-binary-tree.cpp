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
class FindElements {
public:
   TreeNode* ptr;
   void f(int x,TreeNode *ptr1){
    if (ptr1==nullptr) return;
    ptr1->val=x;
    f(2*x+1,ptr1->left);
    f(2*x+2,ptr1->right);
   }

    bool fun(int target,TreeNode* p){
        if (p==nullptr) return false;
        if (p->val==target) return true;
        return (fun(target,p->left) || fun(target,p->right));
     }
    FindElements(TreeNode* root) {
        ptr=root;
        root->val=0;
        f(2*0+1,root->left);
        f(2*0+2,root->right);
    }
    
    bool find(int target) {
        if (ptr->val==target) return true;
        bool flag=(fun(target,ptr->left) || fun(target,ptr->right));
        return flag;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
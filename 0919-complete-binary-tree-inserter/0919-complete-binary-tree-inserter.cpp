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
class CBTInserter {
public:
  queue<TreeNode*>q;
  TreeNode* ptr;
    CBTInserter(TreeNode* root) {
        q.push(root);
        ptr=root;
    }
    
    int insert(int val) {
       while (true){
        TreeNode* p=q.front();
        if (p->left==nullptr){
          p->left=new TreeNode(val);
          q.push(p->left);
          return p->val;
         }
         if (p->left){
            q.push(p->left);
         }
         if (p->right==nullptr){
             p->right=new TreeNode(val);
          q.push(p->right);
          q.pop();
          return p->val;
         }
         if (p->right){
            q.push(p->right);
            q.pop();
         }
       }
    }
    
    TreeNode* get_root() {
        return ptr;
    }
};

/**
 * Your CBTInserter object will be instantiated and called as such:
 * CBTInserter* obj = new CBTInserter(root);
 * int param_1 = obj->insert(val);
 * TreeNode* param_2 = obj->get_root();
 */
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
  vector<int>vec;
    vector<int> findFrequentTreeSum(TreeNode* root) {
        f(root);
         unordered_map<int,int> freq;
        int maxFreq = 0;
        for (int sum : vec) {
            freq[sum]++;
            maxFreq = max(maxFreq, freq[sum]);
        }
        vector<int> result;
        for (auto &p : freq) {
            if (p.second == maxFreq) {
                result.push_back(p.first);
            }
        }
        return result;
    }
    int f(TreeNode* ptr){
        if (ptr==NULL) return 0;
        int a1,a2,a3;
        a1=f(ptr->left);
        a2=ptr->val;
        a3=f(ptr->right);
        vec.push_back(a1+a2+a3);
        return a1+a2+a3;
    }
};
class Solution {
public:
    map<int,int> m;

    vector<int> findMode(TreeNode* root) {
        if (root == nullptr) return {};
        m.clear();

        inorder(root);

        // Find max frequency
        int maxVal = 0;
        for (auto &p : m) {
            if (p.second > maxVal)
                maxVal = p.second;
        }

        // Collect all values with max frequency
        vector<int> modes;
        for (auto &p : m) {
            if (p.second == maxVal)
                modes.push_back(p.first);
        }

        return modes;
    }

private:
    void inorder(TreeNode* node) {
        if (node == nullptr) return;
        inorder(node->left);
        m[node->val]++;
        inorder(node->right);
    }
};

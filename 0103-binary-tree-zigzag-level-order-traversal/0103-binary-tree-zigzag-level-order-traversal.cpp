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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue <TreeNode*> q;
        q.push(root);
        vector <vector <int>> ans;
        if (root == nullptr) return {};
        bool check = true;
        while (!q.empty()) {
            int sz = q.size();
            vector <int> level;
            while (sz--) {
                TreeNode* node = q.front();
                level.push_back(node->val);
                q.pop();
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            if (!check) reverse(level.begin(), level.end());
            ans.push_back(level);
            check = !check;
        }
        return ans;
    }
};
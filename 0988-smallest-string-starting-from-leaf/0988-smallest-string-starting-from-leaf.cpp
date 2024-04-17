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
    string dfs(TreeNode* root, string curr) {
        if (!root) return "";
        curr = char('a' + root->val) + curr;
        if (root->left and root->right) {
            return min(dfs(root->left, curr), dfs(root->right, curr));
        }
        if (root->left) return dfs(root->left, curr);
        if (root->right) return dfs(root->right, curr);
        return curr;
    }

    string smallestFromLeaf(TreeNode* root) {
        return dfs(root, "");
    }
};
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
    int helper(TreeNode* node, int &ans) {
        if (!node) return 0;
        int leftC = helper(node->left, ans);
        int rightC = helper(node->right, ans);
        ans += abs(leftC) + abs(rightC);
        return node->val + leftC + rightC - 1;
    }

    int distributeCoins(TreeNode* root) {
        int ans = 0;
        helper(root, ans);
        return ans;
    }
};
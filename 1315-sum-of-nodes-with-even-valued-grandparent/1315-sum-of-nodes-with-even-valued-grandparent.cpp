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
    void helper(TreeNode* root, int temp, int &ans) {
        if (!root) return;
        if (root->left) {
            if (temp % 2 == 0) ans += root->left->val;
            helper(root->left, root->val, ans);
        }
        if (root->right) {
            if (temp % 2 == 0) ans += root->right->val;
            helper(root->right, root->val, ans);
        }
    }

    int sumEvenGrandparent(TreeNode* root) {
        if (!root) return 0;
        int ans = 0;
        helper(root->left, root->val, ans);
        helper(root->right, root->val, ans);
        return ans;
    }
};
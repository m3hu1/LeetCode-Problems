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
    int solve(TreeNode* node) {
        if(!node) return 0;
        int left = solve(node->left);
        int right = solve(node->right);
        if(node->left && !node->left->left && !node->left->right) {
            left += node->left->val;
        }
        return left + right;
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        return solve(root);
    }
};
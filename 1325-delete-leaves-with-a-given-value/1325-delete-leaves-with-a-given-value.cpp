class Solution {
public:
    TreeNode* helper(TreeNode* root, int target) {
        if (!root) return NULL;
        root->left = helper(root->left, target);
        root->right = helper(root->right, target);
        if (!root->left && !root->right && root->val == target) return NULL;
        return root;
    }

    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        return helper(root, target);
    }
};
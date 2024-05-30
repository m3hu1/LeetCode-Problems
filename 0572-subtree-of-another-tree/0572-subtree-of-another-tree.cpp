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
    bool helper(TreeNode* a, TreeNode* b) {
        if (!a || !b) return a == nullptr && b == nullptr;
        else if (a->val == b->val) return helper(a->left, b->left) && helper(a->right, b->right);
        else return false;
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!root) return false;
        else if (helper(root, subRoot)) return true;
        else return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};
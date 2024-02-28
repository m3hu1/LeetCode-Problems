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
    void dfs(TreeNode* root, int currDepth, int &maxDepth, int &ans) {
        if(!root) return;
        if(currDepth > maxDepth) {
            ans = root->val;
            maxDepth = currDepth;
        }
        dfs(root->left, currDepth + 1, maxDepth, ans);
        dfs(root->right, currDepth + 1, maxDepth, ans);
    }

    int findBottomLeftValue(TreeNode* root) {
        if(!root->left && !root->right) return root->val;
        int ans = 0;
        int currDepth = 1;
        int maxDepth = 0;
        dfs(root, currDepth, maxDepth, ans);
        return ans;
    }
};
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
    string helper(TreeNode* root, unordered_map <string, int> &mp, vector <TreeNode*> &ans) {
        if (!root) return "";
        string left = helper(root->left, mp, ans);
        string right = helper(root->right, mp, ans);
        string curr = to_string(root->val) + "," + left + "," + right;
        if (mp[curr] == 1) ans.push_back(root);
        mp[curr]++;
        return curr;
    }

    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        unordered_map <string, int> mp;
        vector <TreeNode*> ans;
        helper(root, mp, ans);
        return ans;
    }
};
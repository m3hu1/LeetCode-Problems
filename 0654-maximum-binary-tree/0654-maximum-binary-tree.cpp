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
    TreeNode* helper(int low, int high, vector <int> &nums) {
        if (low > high) return nullptr;
        int idx = 0;
        int maxi = INT_MIN;
        for (int i = low; i <= high; i++) {
            if (nums[i] > maxi) {
                maxi = nums[i];
                idx = i;
            }
        }
        TreeNode* root = new TreeNode(maxi);
        root->left = helper(low, idx - 1, nums);
        root->right = helper(idx + 1, high, nums);
        return root;
    }

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return helper(0, nums.size() - 1, nums);
    }
};
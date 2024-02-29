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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* curr = root;
        bool isEven = true;
        while(!q.empty()) {
            int size = q.size();
            int prev = INT_MAX;
            if(isEven) prev = INT_MIN;
            while(size--) {
                curr = q.front();
                q.pop();
                if(isEven && (curr->val % 2 == 0 || curr->val <= prev)) return false;
                if(!isEven) {
                    if(curr->val % 2 != 0 || curr->val >= prev) return false;
                }
                prev = curr->val;
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            isEven = !isEven;
        }
        return true;
    }
};
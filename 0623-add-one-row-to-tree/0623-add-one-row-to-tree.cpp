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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if (depth == 1) {
            TreeNode* curr = root;
            TreeNode* newNode = new TreeNode(val);
            newNode->left = curr;
            return newNode;
        }
        queue <TreeNode*> q;
        q.push(root);
        int currDepth = 1;
        while (currDepth < depth - 1) {
            int size = q.size();
            while (size--) {
                TreeNode* node = q.front();
                q.pop();
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            currDepth++;
        }
        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();
            TreeNode* oldLeft = node->left;
            TreeNode* oldRight = node->right;
            TreeNode* newLeft = new TreeNode(val);
            TreeNode* newRight = new TreeNode(val);
            node->left = newLeft;
            newLeft->left = oldLeft;
            node->right = newRight;
            newRight->right = oldRight;
        }
        return root;
    }
};
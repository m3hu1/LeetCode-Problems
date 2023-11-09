// m3hu1
class Solution {
public:
    pair<int,int> diameterFast(TreeNode* root) {
        if(root == NULL) {
            return {0,0};
        }
        pair<int,int> left = diameterFast(root->left);
        pair<int,int> right = diameterFast(root->right);
        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second + right.second + 1;
        pair<int,int> ans;
        ans.first = max(op1, max(op2, op3));
        ans.second = max(left.second , right.second) + 1;
        return ans;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        ans=diameterFast(root).first;
        return ans-1;
    }
};
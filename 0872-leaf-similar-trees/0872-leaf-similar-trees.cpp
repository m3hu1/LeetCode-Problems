class Solution {
public:
    void inOrder(TreeNode* root, vector<int> &ans) {
        if(root!=nullptr) {
            inOrder(root->left,ans);
            if(root->left==nullptr && root->right==nullptr) {
                ans.push_back(root->val);
            }
            inOrder(root->right, ans);
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> ans1,ans2;
        inOrder(root1, ans1);
        inOrder(root2, ans2);
        return ans1==ans2;
    }
};
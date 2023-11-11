// m3hu1
class Solution {
public:
    vector<int> v;
    void trav(TreeNode *root)
    {
        if(root==NULL)
          return;
        trav(root->left);
        v.push_back(root->val);
        trav(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        trav(root);
        return v[k-1];
    }
};
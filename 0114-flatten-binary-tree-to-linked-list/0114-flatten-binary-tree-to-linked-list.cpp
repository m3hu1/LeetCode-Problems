// m3hu1
class Solution {
public:
    void flatten(TreeNode* root) {
        vector<int>v;
        inorder(root,v);
        TreeNode* curr = root;
        for(int i = 1 ; i< v.size() ; i++){
            curr->left = nullptr;
            curr->right = new TreeNode(v[i]);
            curr = curr->right;
        }
    }
    void inorder(TreeNode*root , vector<int>&v){
        if(root == nullptr){
            return;
        }
        v.push_back(root->val);
        inorder(root->left,v);
        inorder(root->right,v);
    }
};
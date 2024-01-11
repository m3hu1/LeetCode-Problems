class Solution {
int maxdiff=0;
public:
    void helper(TreeNode*  root,int mini,int maxi){
        if(!root){return;}
        mini=min(mini,root->val);
        maxi=max(maxi,root->val);
        maxdiff=max(maxdiff,maxi-mini);
        helper(root->left,mini,maxi);
        helper(root->right,mini,maxi);
    }
    int maxAncestorDiff(TreeNode* root) {
        helper(root,100005,0);
        root->left=NULL;
        root->right=NULL;
        return maxdiff;
    }
};
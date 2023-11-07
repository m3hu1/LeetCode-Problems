// m3hu1
class Solution {
public:
    int maxfind(TreeNode * root,int * maxsum)
    {
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL) 
        {
            *maxsum = max(*maxsum,root->val);
            return root->val;
        }
        int l = maxfind(root->left,maxsum);
        int r = maxfind(root->right,maxsum);
        *maxsum = max(*maxsum,l+r+root->val);
        *maxsum = max(*maxsum,l+root->val);
        *maxsum = max(*maxsum,r+root->val);
        *maxsum = max(*maxsum,root->val);
        return max(root->val,max(root->val+r,root->val+l));
    }
    int maxPathSum(TreeNode* root) {
        int res = root->val;
        int res2 = maxfind(root,&res);
        cout<<res<<res2;
        return max(res,res2);
    }
};
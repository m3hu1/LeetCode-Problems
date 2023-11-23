// m3hu1
class Solution {
public:
    void getmin(TreeNode* root,int &ans,TreeNode *&head){
        if(root==NULL)
          return ;
        getmin(root->right,ans,head);
        if(head){
            ans=min(ans,abs(root->val - head->val));
        }
        head=root;
        getmin(root->left,ans,head);
    } 
    int getMinimumDifference(TreeNode* root) {
        int ans=INT_MAX;
        TreeNode *head=NULL;
        getmin(root,ans,head);
        return ans;
    }
};
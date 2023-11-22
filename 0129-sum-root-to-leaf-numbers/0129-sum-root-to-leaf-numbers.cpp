// m3hu1
class Solution {
private:
    void solve1(vector<int>v,int &sum){
        int length=v.size();
        int j=0;
        for(int i=length-1;i>=0;i--){
            sum+=v[j]*pow(10,i);
            j++;
        }
        return;
    }
private:
    void solve(TreeNode* root,vector<int>v,int &sum){
        v.push_back(root->val);
        if(root->left==NULL && root->right==NULL){
            solve1(v,sum);
            return;
        }
        if(root->left!=NULL){
            solve(root->left,v,sum);
        }
        if(root->right!=NULL){
            solve(root->right,v,sum);
        }
    }
public:
    int sumNumbers(TreeNode* root) {
        int sum=0;
        vector<int>v;
        if(root==NULL){
            return 0;
        }
        solve(root,v,sum);
        return sum;
    }
};
// m3hu1
class Solution {
public:
    unordered_map<int, int>mp;
    void mapping(vector<int>& inorder)
    {
        for(int i = 0; i < inorder.size(); i++)
        mp[inorder[i]] = i;
    }

    TreeNode*solve(int start, int end, int &j, vector<int>& inorder, vector<int>& postorder)
    {
        if(start > end || j < 0)
        return NULL;

        int value = postorder[j];
        j--;
        // int idx = findPosition(start, end, inorder, value);
        int idx = mp[value];

        TreeNode*root = new TreeNode(value);

        root->right = solve(idx + 1, end, j, inorder, postorder);
        root->left = solve(start, idx - 1 , j, inorder, postorder);

        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        mp.clear();
        int j = n - 1;
        mapping(inorder);
        return solve(0, j, j, inorder, postorder);
    }
};
class Solution {
    void findAdj(unordered_map<int, vector<int>>& mp, TreeNode* root) {
        if (root == nullptr) {
            return;
        }
        if (root->left != nullptr) {
            mp[root->val].push_back(root->left->val);
            mp[root->left->val].push_back(root->val);
        }
        if (root->right != nullptr) {
            mp[root->val].push_back(root->right->val);
            mp[root->right->val].push_back(root->val);
        }
        findAdj(mp, root->left);
        findAdj(mp, root->right);
    }
    int solve(int start, unordered_map<int, vector<int>>& mp,
              unordered_map<int, bool>& vis) {
        queue<pair<int, int>> q;
        q.push({start, 0});
        vis[start] = true;
        int ans = 0;
        while (!q.empty()) {
            auto top = q.front();
            q.pop();
            int v = top.first;
            int t = top.second;

            for (auto& x : mp[v]) {
                if (vis[x] != true) {
                    ans = max(ans, t + 1);
                    q.push({x, t + 1});
                    vis[x] = true;
                }
            }
        }
        return ans;
    }

public:
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<int, vector<int>> mp;
        findAdj(mp, root);
        unordered_map<int, bool> vis;
        int ans = solve(start, mp, vis);
        ;
        return ans;
    }
};
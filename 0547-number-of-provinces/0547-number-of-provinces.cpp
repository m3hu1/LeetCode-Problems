class Solution {
public:
    void dfs(vector<vector<int>>& isConnected, int i, vector <bool> &vis) {
        vis[i] = true;
        for (int j = 0; j < isConnected.size(); j++) {
            if (isConnected[i][j] == 1 && vis[j] == false) {
                dfs(isConnected, j, vis);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        vector <bool> vis(isConnected.size(), false);
        int ans = 0;
        for (int i = 0; i < isConnected.size(); i++) {
            if (vis[i] == false) {
                dfs(isConnected, i, vis);
                ans++;
            }
        }
        return ans;
    }
};
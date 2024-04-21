class Solution {
public:
    void dfs(int node, vector <vector <int>> &g, vector <bool> &vis) {
        if (vis[node]) return;
        vis[node] = true;
        for (int child : g[node]) {
            if (!vis[child]) dfs(child, g, vis);
        }
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector <vector <int>> g(n);
        vector <bool> vis(n, false);
        for (vector<int> edge : edges) {
            int u = edge[0];
            int v = edge[1];
            g[u].push_back(v);
            g[v].push_back(u);
        }
        dfs(source, g, vis);
        return vis[destination];
    }
};
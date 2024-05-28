class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        if (n > connections.size() + 1) {
            return -1;
        }
        unordered_map <int, vector <int>> adj;
        vector <bool> vis(n, false);
        for (auto conn : connections) {
            adj[conn[0]].push_back(conn[1]);
            adj[conn[1]].push_back(conn[0]);
        }
        auto bfs = [&](int start) {
            queue <int> q;
            q.push(start);
            vis[start] = true;
            while (!q.empty()) {
                int node = q.front();
                q.pop();
                for (int nei : adj[node]) {
                    if (!vis[nei]) {
                        vis[nei] = true;
                        q.push(nei);
                    }
                }
            }
        };
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                cnt++;
                bfs(i);
            }
        }
        return cnt - 1;
    }
};
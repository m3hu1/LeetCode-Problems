class Solution {
public:
    int secondMinimum(int n, vector<vector<int>>& edges, int tt, int change) {
        unordered_map <int, unordered_set <int>> g;

        for (auto edge : edges) {
            int u = edge[0], v = edge[1];
            g[u].insert(v);
            g[v].insert(u);
        }
        
        queue <int> q;
        q.push(1);
        int at = 0;
        int dt = 0;
        unordered_map <int, int> vis_cnt;

        while (!q.empty()) {
            int sz = q.size();
            unordered_set <int> nxt;
            for (int i = 0; i < sz; i++) {
                int node = q.front(); q.pop();
                if (node == n && vis_cnt[node] == 1) {
                    return at;
                }
                if (vis_cnt[node] == 2) {
                    continue;
                }
                vis_cnt[node]++;
                for (int nei : g[node]) {
                    if (vis_cnt[nei] < 2) {
                        nxt.insert(nei);
                    }
                }
            }
            for (int next_node : nxt) {
                q.push(next_node);
            }
            at = dt + tt;
            int cycle = at / change;
            
            if (cycle % 2 == 1) {
                dt = change * (cycle + 1);
            } else {
                dt = at;
            }
        }
        
        return -1;
    }
};
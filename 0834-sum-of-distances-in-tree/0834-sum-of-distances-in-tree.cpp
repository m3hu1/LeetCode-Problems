class Solution {
public:
    void post(int node, int papa, vector <int> &ans, vector <int> &cnt, unordered_map <int, unordered_set <int>> &g) { // partial sums
        for (auto child : g[node]) {
            if (child == papa) continue;
            post(child, node, ans, cnt, g);
            cnt[node] += cnt[child];
            ans[node] += ans[child] + cnt[child];
        }
    }

    void pre(int node, int papa, int n, vector <int> &ans, vector <int> &cnt, unordered_map <int, unordered_set <int>> &g) { // dist from each child to all other nodes
        for (auto child : g[node]) {
            if (child == papa) continue;
            ans[child] = ans[node] - cnt[child] + (n - cnt[child]);
            pre(child, node, n, ans, cnt, g);
        }
    }

    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        vector <int> ans(n, 0);
        vector <int> cnt(n, 1);
        unordered_map <int, unordered_set <int>> g;
        for (auto edge : edges) {
            g[edge[0]].insert(edge[1]);
            g[edge[1]].insert(edge[0]);
        }
        post(0, 0, ans, cnt, g);
        pre(0, 0, n, ans, cnt, g);
        return ans;
    }
};
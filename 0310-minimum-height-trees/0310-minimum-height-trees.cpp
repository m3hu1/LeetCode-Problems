class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if (n == 1) return {0};
        vector <int> ans;
        queue <int> q;
        vector <vector <int>> g(n);
        vector <int> cnt(n, 0); // to store the degree of every node
        for (vector <int> edge : edges) { // adjacency list
            cnt[edge[0]]++;
            cnt[edge[1]]++;
            g[edge[0]].push_back(edge[1]);
            g[edge[1]].push_back(edge[0]);
        }
        for (int i = 0; i < n; i++) {
            if (cnt[i] == 1) q.push(i);
        }
        while (n > 2) { // n = 1 and n = 2 are base
            int size = q.size();
            n = n - size;
            while (size--) {
                int node = q.front();
                q.pop();
                for (int padosi : g[node]) {
                    cnt[padosi]--;
                    if (cnt[padosi] == 1) q.push(padosi);
                }
            }
            size--;
        }
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            ans.push_back(node);
        }
        return ans;
    }
};
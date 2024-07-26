class Solution {
public:
    int findTheCity(int N, vector<vector<int>>& edges, int dt) {
        int ans = -1;
        vector<vector<int>> g(N, vector<int>(N, INT_MAX));

        for (int i = 0; i < N; i++) {
            g[i][i] = 0;
        }

        for (auto edge : edges) {
            int u = edge[0], v = edge[1], w = edge[2];
            g[u][v] = w;
            g[v][u] = w;
        }

        for (int k = 0; k < N; k++) {
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++) {
                    if (g[i][k] != INT_MAX && g[k][j] != INT_MAX) {
                        g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
                    }
                }
            }
        }

        int curr = INT_MAX;

        for (int i = 0; i < N; i++) {
            int temp = 0;
            for (int j = 0; j < N; j++) {
                if (g[i][j] <= dt) {
                    temp++;
                }
            }
            if (temp <= curr) {
                ans = i;
                curr = temp;
            }
        }

        return ans;
    }
};

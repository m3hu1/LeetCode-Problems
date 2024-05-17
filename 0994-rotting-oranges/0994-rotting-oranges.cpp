class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue <tuple<int, int, int>> q;
        int f = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) f++;
                else if (grid[i][j] == 2) q.emplace(i, j, 0);
            }
        }
        int ans = 0;
        vector <pair <int, int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        while (!q.empty()) {
            auto [i, j, m] = q.front();
            q.pop();
            ans = m;
            for (auto [di, dj] : dir) {
                int r = i + di;
                int c = j + dj;
                if (r >= 0 && r < grid.size() && c >= 0 && c < grid[0].size() && grid[r][c] == 1) {
                    grid[r][c] = 2;
                    f--;
                    q.emplace(r, c, m + 1);
                }
            }
        }
        return f > 0 ? -1 : ans;
    }
};
class Solution {
public:
    void dfs(vector <vector <int>> &grid, int r, int c, int &ans, int &tot) {
        ans = max(ans, tot);
        if (r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size() || grid[r][c] == 0) return;
        tot += grid[r][c];
        grid[r][c] = 0;
        dfs(grid, r + 1, c, ans, tot);
        dfs(grid, r - 1, c, ans, tot);
        dfs(grid, r, c + 1, ans, tot);
        dfs(grid, r, c - 1, ans, tot);
    }

    int findMaxFish(vector<vector<int>>& grid) {
        if (grid.size() == 0) return 0;
        int ans = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] > 0) {
                    int tot = 0;
                    dfs(grid, i, j, ans, tot);
                }
            }
        }
        return ans;
    }
};
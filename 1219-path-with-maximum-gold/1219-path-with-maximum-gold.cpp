class Solution {
public:
    int dfs(vector <vector <int>> &grid, int i, int j) {
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == 0) {
            return 0;
        }
        int temp = grid[i][j];
        grid[i][j] = 0;
        int up = dfs(grid, i - 1, j);
        int down = dfs(grid, i + 1, j);
        int left = dfs(grid, i, j - 1);
        int right = dfs(grid, i, j + 1);
        grid[i][j] = temp;
        return temp + max(max(max(up, down), left), right);
    }

    int getMaximumGold(vector<vector<int>>& grid) {
        int maxGold = 0;
        for (int r = 0; r < grid.size(); ++r) {
            for (int c = 0; c < grid[0].size(); ++c) {
                if (grid[r][c] > 0) {
                    int temp = dfs(grid, r, c);
                    maxGold = max(maxGold, temp);
                }
            }
        }
        return maxGold;
    }
};
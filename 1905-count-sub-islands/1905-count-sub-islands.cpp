class Solution {
public:
    void dfs(vector <vector <int>> &grid1, vector <vector <int>> &grid2, int r, int c, bool &check) {
        if (r < 0 || c < 0 || r >= grid2.size() || c >= grid2[0].size() || grid2[r][c] != 1) return;
        if (grid1[r][c] != 1) check = false;
        grid2[r][c] = 0;
        dfs(grid1, grid2, r + 1, c, check);
        dfs(grid1, grid2, r - 1, c, check);
        dfs(grid1, grid2, r, c + 1, check);
        dfs(grid1, grid2, r, c - 1, check);
    }

    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int ans = 0;
        for (int i = 0; i < grid1.size(); i++) {
            for (int j = 0; j < grid1[0].size(); j++) {
                if (grid2[i][j] == 1) {
                    bool check = true;
                    dfs(grid1, grid2, i, j, check);
                    if (check == true) ans++;
                }
            }
        }
        return ans;
    }
};
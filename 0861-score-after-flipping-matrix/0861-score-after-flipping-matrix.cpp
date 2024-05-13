class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        for (int i = 0; i < rows; i++) {
            if (grid[i][0] == 0) {
                for (int j = 0; j < cols; j++) {
                    grid[i][j] = 1 - grid[i][j];
                }
            }
        }
        vector <int> cols2(cols, 0);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cols2[j] += grid[i][j];
            }
        }
        for (int j = 0; j < cols; j++) {
            if (cols2[j] < rows - cols2[j]) {
                cols2[j] = rows - cols2[j];
            }
        }
        int ans = 0;
        for (int j = 0; j < cols; j++) {
            ans = ans * 2 + cols2[j];
        }
        return ans;
    }
};

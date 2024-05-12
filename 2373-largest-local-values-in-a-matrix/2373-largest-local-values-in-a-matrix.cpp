class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        vector <vector <int>> maxLocal(rows - 2, vector <int> (cols - 2, 0)); // init matrix
        for (int r = 0; r < rows - 2; r++) {
            for (int c = 0; c < cols - 2; c++) {
                for (int x = r; x < r + 3; x++) {
                    for (int y = c; y < c + 3; y++) {
                        maxLocal[r][c] = max(maxLocal[r][c], grid[x][y]);
                    }
                }
            }
        }
        return maxLocal;
    }
};
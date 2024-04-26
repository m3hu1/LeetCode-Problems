class Solution {
public:
    int minFallingPathSum(vector <vector <int>> &grid) {
        int x = 0, y = 0, z = -1;
        for (int i = grid.size() - 1; i >= 0; i--) {
            int mini1 = INT_MAX, mini2 = INT_MAX, idx = -1;
            for (int j = 0; j < grid.size(); j++) {
                int curr = (j == z) ? y : x;
                curr += grid[i][j];
                if (curr < mini1) {
                    mini2 = mini1;
                    mini1 = curr;
                    idx = j;
                } else if (curr < mini2) {
                    mini2 = curr;
                }
            }
            x = mini1;
            y = mini2;
            z = idx;
        }
        return x;
    }
};
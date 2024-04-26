class Solution {
public:
    int minFallingPathSum(vector <vector <int>> &matrix) {
        int ans = INT_MAX;
        int n = matrix.size();
        vector <vector <int>> dp(n, vector <int>(n, INT_MAX));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0) { // first row ke upar kuch nahi
                    dp[i][j] = matrix[i][j];
                } else {
                    dp[i][j] = dp[i - 1][j];
                    if (j != 0) { // case 1
                        dp[i][j] = min(dp[i][j], dp[i - 1][j - 1]);
                    }
                    if (j != n - 1) { // case 2
                        dp[i][j] = min(dp[i][j], dp[i - 1][j + 1]);
                    }
                    dp[i][j] += matrix[i][j];
                }
            }
        }
        // int minSum = INT_MAX;
        // for (int j = 0; j < n; j++) {
        //     minSum = min(minSum, dp[n - 1][j]);
        // }
        // return minSum;
        return *min_element(dp[n - 1].begin(), dp[n - 1].end());
    }
};
// m3hu1
class Solution {
public:
    int solve(int n) {
        if (n <= 0) return 0;
        vector<int> dp(n + 1, INT_MAX);
        return helper(n, dp);
    }

    int helper(int n, vector<int>& dp) {
        if (n == 0) return 0;
        if (dp[n] != INT_MAX) return dp[n];

        for (int i = 1; i * i <= n; i++) {
            dp[n] = min(dp[n], helper(n - i * i, dp) + 1);
        }

        return dp[n];
    }
    int numSquares(int n) {
        return solve(n);
    }
};
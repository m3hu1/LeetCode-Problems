// m3hu1
const int MOD = 1e9 + 7;
std::vector<std::vector<int>> dp(5001, std::vector<int>(10, -1));

class Solution {
public:
    int knightDialer(int n) {        
        int res = 0;
        for (int i = 0; i < 10; i++) {
            res = (res + knight_iter(i, n, dp)) % MOD;
        }
        return res;
    }

    int knight_iter(int begin, int n, std::vector<std::vector<int>>& dp) {
        if (n == 1) return 1;
        if (dp[n][begin] != -1) return dp[n][begin];

        switch (begin) {
            case 1:
                return dp[n][begin] = (knight_iter(6, n - 1, dp) + knight_iter(8, n - 1, dp)) % MOD;
            case 2:
                return dp[n][begin] = (knight_iter(7, n - 1, dp) + knight_iter(9, n - 1, dp)) % MOD;
            case 3:
                return dp[n][begin] = (knight_iter(4, n - 1, dp) + knight_iter(8, n - 1, dp)) % MOD;
            case 4:
                return dp[n][begin] = ((knight_iter(0, n - 1, dp) + knight_iter(3, n - 1, dp)) % MOD + knight_iter(9, n - 1, dp)) % MOD;
            case 6:
                return dp[n][begin] = ((knight_iter(0, n - 1, dp) + knight_iter(1, n - 1, dp)) % MOD + knight_iter(7, n - 1, dp)) % MOD;
            case 7:
                return dp[n][begin] = (knight_iter(2, n - 1, dp) + knight_iter(6, n - 1, dp)) % MOD;
            case 8:
                return dp[n][begin] = (knight_iter(1, n - 1, dp) + knight_iter(3, n - 1, dp)) % MOD;
            case 9:
                return dp[n][begin] = (knight_iter(2, n - 1, dp) + knight_iter(4, n - 1, dp)) % MOD;
            case 0:
                return dp[n][begin] = (knight_iter(4, n - 1, dp) + knight_iter(6, n - 1, dp)) % MOD;
            default:
                return 0; // case 5
        }
    }
};
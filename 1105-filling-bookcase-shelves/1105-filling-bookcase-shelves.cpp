class Solution {
public:
    int minHeightShelves(vector<vector<int>>& b, int sw) {
        vector <int> dp(b.size() + 1, INT_MAX);
        dp[0] = 0;

        for (int i = 1; i <= b.size(); i++) {
            int ch = 0, cw = 0;
            for (int j = i - 1; j >= 0; j--) {
                cw += b[j][0];
                if (cw > sw) break;
                ch = max(ch, b[j][1]);
                dp[i] = min(dp[i], dp[j] + ch);
            }
        }

        return dp[b.size()];
    }
};
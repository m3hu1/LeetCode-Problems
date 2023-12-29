class Solution {
public:
  int minDifficulty(vector<int>& jobs, int days) {
        const int n = (int)jobs.size();
        if (n < days) return -1;
        vector<int> dp(n), old(n);
        dp[0] = jobs[0];
        for (int i = 1; i < n; i++)
            dp[i] = max(dp[i-1], jobs[i]);

        for (int d = 1; d < days; d++) {
            swap(dp, old);
            vector<array<int,3>> stk = {{1<<30,1<<30,1<<30}};
            for (int i = d; i < n; i++) {
                int oldBest = old[i-1];
                while (stk.back()[1] <= jobs[i]) {
                    oldBest = min(oldBest, stk.back()[0]);
                    stk.pop_back();
                }
                stk.push_back({oldBest, jobs[i], min(oldBest + jobs[i], stk.back()[2])});
                dp[i] = stk.back()[2];
            }
        }
        return dp[n-1];
    }
};
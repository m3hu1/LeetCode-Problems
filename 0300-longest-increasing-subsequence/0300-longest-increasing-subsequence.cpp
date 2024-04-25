class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector <int> dp(n, 1);
        for (int i = n; i >= 0; i--) {
            for (int j = i + 1; j < n; j++) {
                if (nums[j] > nums[i]) dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        int ans = 0;
        for (auto i : dp) {
            if (i > ans) ans = i;
        }
        return ans;
    }
};
// m3hu1
class Solution {
public:
    int _rob(int curr, int take, vector<int>& nums, vector<vector<int>>& dp) {
        if(curr >= nums.size()) return 0;
        if(dp[curr][take] > 0) return dp[curr][take];
        int option1 = INT_MIN, option2 = INT_MIN;
        if(!take && nums[curr] > 0)
            option1 = nums[curr] + _rob(curr+1, 1, nums, dp);
        option2 = _rob(curr+1, 0, nums, dp);
        return dp[curr][take] = max(option1, option2);
    }
    int rob(vector<int>& nums) {
        vector<vector<int>> dp(nums.size(), vector<int>(2, 0));
        return _rob(0, 0, nums, dp);
    }
};
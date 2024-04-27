class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        for (auto n : nums) ans += abs(n - nums[nums.size() / 2]);
        return ans;
    }
};
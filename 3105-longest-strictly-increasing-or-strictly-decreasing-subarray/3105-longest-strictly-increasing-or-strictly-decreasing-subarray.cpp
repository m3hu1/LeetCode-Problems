class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int ans = 1;
        int up = 1;
        int down = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                up++;
                down = 1;
            } else if (nums[i] < nums[i - 1]) {
                down++;
                up = 1;
            } else {
                up = 1;
                down = 1;
            }
            ans = max({up, down, ans});
        }
        return ans;
    }
};
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans = 0;
        int smol = INT_MAX;
        for (int n : nums) smol = min(smol, n);
        for (int n : nums) ans += n - smol;
        return ans;
    }
};
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set <int> st(nums.begin(), nums.end());
        int ans = -1;
        for (auto n : nums) {
            if (st.find(-n) != st.end() && n > ans) ans = n;
        }
        return ans;
    }
};
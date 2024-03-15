class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0 || nums.size() == 1){
            return nums.size();
        }
        unordered_set <int> st(nums.begin(), nums.end());
        int ans = 0;
        for (auto i : st) {
            if (st.find(i - 1) == st.end()) {
                int length = 1;
                while (st.find(i + length) != st.end()) {
                    length++;
                }
                ans = max(ans, length);
            }
        }
        return ans;
    }
};
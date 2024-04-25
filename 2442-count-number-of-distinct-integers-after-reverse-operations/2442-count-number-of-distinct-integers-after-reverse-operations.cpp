class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set <int> st(nums.begin(), nums.end());
        for (int i : nums) {
            int rev = 0;
            while (i > 0) {
                rev = rev * 10 + i % 10;
                i = i / 10;
            }
            st.insert(rev);
        }
        return st.size();
    }
};
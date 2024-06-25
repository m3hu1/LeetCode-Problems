class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        // order based DS and policty based ds -> segment tree -> fenwick tree -> avl tree -> red-black
        multiset <int> st; // ordered and duplis
        int ans = 0;
        int l = 0;

        for (int r = 0; r < nums.size(); r++) {
            st.insert(nums[r]); // 2->3, 8
            while (*st.rbegin() - *st.begin() > limit) {
                st.erase(st.find(nums[l]));
                l++;
            }

            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};
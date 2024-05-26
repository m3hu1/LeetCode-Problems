class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_set <int> st;
        int ans = 0;
        for (auto i : nums) {
            if (st.find(i) != st.end()) ans = ans ^ i;
            else st.insert(i);
        }
        return ans;
    }
};
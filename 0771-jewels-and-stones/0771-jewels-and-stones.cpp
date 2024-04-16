class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set <char> st;
        int cnt = 0;
        for (auto j : jewels) st.insert(j);
        for (auto s : stones) {
            if (st.find(s) != st.end()) cnt++;
        }
        return cnt;
    }
};
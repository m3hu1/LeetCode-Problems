class Solution {
public:
    int longestPalindrome(string s) {
        unordered_set <int> vis;
        int ans = 0;
        for (auto i : s) {
            if (vis.find(i) != vis.end()) {
                ans = ans + 2;
                vis.erase(i);
            } else vis.insert(i);
        }
        return !vis.empty() ? ans + 1 : ans;
    }
};
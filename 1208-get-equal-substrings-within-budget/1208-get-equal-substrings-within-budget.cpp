class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int i = 0;
        int j = 0;
        int curr = 0;
        int ans = 0;
        while (j < s.size()) {
            curr += abs(s[j] - t[j]);
            while (curr > maxCost) {
                curr -= abs(s[i] - t[i]);
                i++;
            }
            ans = max(ans, j - i + 1);
            j++;
        }
        return ans;
    }
};
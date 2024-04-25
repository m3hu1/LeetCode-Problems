class Solution {
public:
    int longestIdealString(string s, int k) {
        vector <int> dp(26, 0); // for every alphabet
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            int maxL = 0; // max length up to the curr char in string s
            for (char ch = 'a'; ch <= 'z'; ch++) { // check for last char
                if (abs(s[i] - ch) <= k) {
                    maxL = max(maxL, dp[ch - 'a'] + 1); // len incr by 1 if maxL
                }
            }
            ans = max(ans, maxL); // can be done separately; this is more optimized
            dp[s[i] - 'a'] = maxL; // update the dp vector
        }
        return ans;
    }
};
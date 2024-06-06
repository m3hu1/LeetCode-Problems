class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map <char, int> mp;
        int maxL = 0;
        int l = 0;
        for (int r = 0; r < s.size(); r++) {
            mp[s[r]]++;
            while (mp[s[r]] > 2) {
                mp[s[l]]--;
                l++;
            }
            maxL = max(maxL, r - l + 1);
        }
        return maxL;
    }
};
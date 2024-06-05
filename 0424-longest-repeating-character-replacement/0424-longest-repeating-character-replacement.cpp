class Solution {
public:
    int maxFreq(unordered_map <char, int> &mp) {
        int maxfreq = 0;
        for (auto i : mp) maxfreq = max(maxfreq, i.second);
        return maxfreq;
    }

    int characterReplacement(string s, int k) {
        unordered_map <char, int> mp;
        int l = 0, r = 0, ans = 0;
        for (r = 0; r < s.size(); r++) {
            mp[s[r]]++;
            int curr = r - l + 1;
            if (curr - maxFreq(mp) <= k) {
                ans = max(ans, curr);
            } else {
                mp[s[l]]--;
                l++;
            }
        }
        return ans;
    }
};
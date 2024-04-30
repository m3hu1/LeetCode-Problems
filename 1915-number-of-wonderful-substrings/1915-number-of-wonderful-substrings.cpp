class Solution {
public:
    long long wonderfulSubstrings(string word) {
        unordered_map <long long, long long> mp;
        mp[0] = 1;
        int xorr = 0;
        long long ans = 0;
        for (auto ch : word) {
            int shift = ch - 'a';
            xorr = xorr ^ (1 << shift); // binary representation of ch
            ans += mp[xorr];
            for (char c = 'a'; c <= 'j'; c++) {
                shift = c - 'a';
                long long tempxor = xorr ^ (1 << shift);
                ans += mp[tempxor];
            }
            mp[xorr]++;
        }
        return ans;
    }
};
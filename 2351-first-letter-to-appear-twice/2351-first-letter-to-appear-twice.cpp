class Solution {
public:
    char repeatedCharacter(string s) {
        vector <bool> freq(26, false);
        for (auto ch : s) {
            if (freq[ch - 'a'] == true) return ch;
            else freq[ch - 'a'] = true;
        }
        return 'a';
    }
};
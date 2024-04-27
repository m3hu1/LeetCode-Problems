class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls = 0;
        int cows = 0;
        vector <char> s(secret.begin(), secret.end());
        vector <char> g(guess.begin(), guess.end());
        int i = 0;
        int j = 0;
        while (i < secret.size()) {
            if (s[j] == g[j]) {
                bulls++;
                s.erase(s.begin() + j);
                g.erase(g.begin() + j);
            } else j++;
            i++;
        }
        unordered_map <char, int> cnt;
        for (char ch : s) cnt[ch]++;
        for (char ch : g) {
            if (cnt.find(ch) != cnt.end() && cnt[ch] > 0) {
                cows++;
                cnt[ch]--;
            }
        }
        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};
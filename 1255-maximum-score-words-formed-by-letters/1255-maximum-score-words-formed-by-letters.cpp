class Solution {
public:
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        unordered_map <char, int> lcnt;
        for (char l : letters) {
            lcnt[l] += 1;
        }
        auto isOK = [&](string &word, unordered_map <char, int> &lcnt) {
            unordered_map <char, int> count;
            for (char c : word) {
                count[c] += 1;
            }
            for (auto kv : count) {
                if (kv.second > lcnt[kv.first]) {
                    return false;
                }
            }
            return true;
        };
        auto calcScore = [&](string &word) {
            int sc = 0;
            for (char ch : word) {
                sc += score[ch - 'a'];
            }
            return sc;
        };
        function<int(int)> helper = [&](int idx) {
            if (idx == words.size()) {
                return 0;
            }
            int ans = helper(idx + 1);
            if (isOK(words[idx], lcnt)) {
                for (char ch : words[idx]) {
                    lcnt[ch] -= 1;
                }
                ans = max(ans, helper(idx + 1) + calcScore(words[idx]));
                for (char ch : words[idx]) {
                    lcnt[ch] += 1;
                }
            }
            return ans;
        };
        return helper(0);
    }
};

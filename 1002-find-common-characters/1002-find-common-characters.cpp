class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector <int> v(26, INT_MAX);
        vector <string> ans;
        for (auto i : words) {
            vector <int> freq(26, 0);
            for (auto ch : i) freq[ch - 'a']++;
            for (int j = 0; j < 26; j++) v[j] = min(v[j], freq[j]);
        }
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < v[i]; j++) {
                ans.push_back({(char)(i + 'a')});
            }
        }
        return ans;
    }
};
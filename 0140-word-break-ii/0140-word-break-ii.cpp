class Solution {
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_set <string> dick(wordDict.begin(), wordDict.end());
        vector <string> ans;
        vector <string> curr;
        function<void(int)> helper = [&](int idx) {
            if (idx == s.size()) {
                string sentence = "";
                for (auto word : curr) {
                    sentence += word + " ";
                }
                sentence.pop_back();
                ans.push_back(sentence);
                return;
            }
            for (int i = idx; i < s.size(); i++) {
                string word = s.substr(idx, i - idx + 1);
                if (dick.find(word) != dick.end()) {
                    curr.push_back(word);
                    helper(i + 1);
                    curr.pop_back();
                }
            }
        };
        helper(0);
        return ans;
    }
};

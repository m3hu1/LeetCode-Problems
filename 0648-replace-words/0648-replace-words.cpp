class Solution {
public:
    string replaceWords(vector<string>& d, string s) {
        unordered_map <string, int> mp;
        for (auto i : d) mp[i]++;
        string ans = "";
        int i = 0;
        while (i < s.size()) {
            string word = "";
            bool check = 1;
            while (i < s.size() && s[i] != ' ') {
                word += s[i];
                if (mp.count(word) && check) {
                    check = 0;
                    ans += word + " ";
                }
                i++;
            }
            if (check) ans += word + " ";
            i++;
        }
        return ans.substr(0, ans.size() - 1);
    }
};
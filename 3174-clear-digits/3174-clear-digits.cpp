class Solution {
public:
    string clearDigits(string s) {
        string ans = "";
        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) {
                ans.pop_back();
            } else ans += s[i];
        }
        return ans;
    }
};
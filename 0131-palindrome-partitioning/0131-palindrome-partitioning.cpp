class Solution {
public:
    bool isPal(string &s, int left, int right) {
        while (left < right) if (s[left++] != s[right--]) return false;
        return true;
    }

    void helper(string &s, int start, vector <string> &p, vector <vector <string>> &ans) {
        if (start == s.size()) ans.push_back(p);
        else {
            for (int i = start; i < s.size(); i++) {
                if (isPal(s, start, i)) {
                    p.push_back(s.substr(start, 1 + i - start));
                    helper(s, i + 1, p, ans);
                    p.pop_back();
                }
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector <vector <string>> ans;
        vector <string> p;
        helper(s, 0, p, ans);
        return ans;
    }
};
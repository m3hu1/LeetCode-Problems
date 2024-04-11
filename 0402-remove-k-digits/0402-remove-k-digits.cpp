class Solution {
public:
    string removeKdigits(string num, int k) {
        stack <char> st;
        for (auto ch : num) {
            while (!st.empty() && k > 0 && st.top() > ch) {
                st.pop();
                k--;
            }
            st.push(ch);
        }
        while (!st.empty() && k > 0) {
            st.pop();
            k--;
        }
        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        int i = ans.size() - 1;
        while (i >= 0 && ans[i] == '0') i--;
        ans = ans.substr(0, i + 1);
        reverse(ans.begin(), ans.end());
        if (ans.empty()) return "0";
        return ans;
    }
};
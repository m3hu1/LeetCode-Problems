class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        int i = 0;
        while (i < s.size()) {
            if (!st.empty() && st.top() != s[i] &&
                tolower(st.top()) == tolower(s[i])) {
                st.pop();
            } else
                st.push(s[i]);
            i++;
        }
        string ans = "";
        while (!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};
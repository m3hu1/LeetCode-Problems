class Solution {
public:
    string reverseWords(string s) {
        stack <string> st;
        string str = "";
        for (char c : s) {
            if (c == ' ') {
                if (!str.empty()) {
                    st.push(str);
                    str.clear();
                }
            } else {
                str += c;
            }
        }
        if (!str.empty()) st.push(str);
        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
            if (!st.empty()) ans += ' ';
        }
        return ans;
    }
};
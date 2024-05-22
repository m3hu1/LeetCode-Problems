class Solution {
public:
    string removeOuterParentheses(string s) {
        // stack <char> st;
        // string ans = "";
        // for (char c : s) {
        //     if (c == '(') {
        //         if (!st.empty()) ans += c;
        //         st.push(c);
        //     } else {
        //         if (st.size() > 1) {
        //             ans += c;
        //         }
        //         st.pop();
        //     }
        // }
        // return ans;
        int cnt = 0;
        string ans = "";
        for (char c : s) {
            if (c == ')') cnt--;
            if (cnt != 0) ans += c;
            if (c == '(') cnt++;
        }
        return ans;
    }
};
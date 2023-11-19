// m3hu1
class Solution {
public:
    bool isOperator(char c) {
        return c == '+' || c == '-';
    }
    int count = 0;
    int calculate(string s) {

        int curr = 0;
        int res = 0;
        int sign = 1;
        stack<pair<int, int>> st;

        for(int i =0;i<s.size(); i++) {
            if(isdigit(s[i])) {
                curr = curr*10 + (s[i]-'0');
            }
            else if(isOperator(s[i])) {
                res += sign * curr;
                curr = 0;
                sign = s[i] == '+' ? 1: -1;
            } else if (s[i] == '(') {
                st.push({res, sign});
                curr = 0;
                res = 0;
                sign = 1;
            } else if (s[i] == ')') {
                res += sign  * curr;

                auto prevRes_sign = st.top();
                st.pop();
                res = res*prevRes_sign.second;
                res += prevRes_sign.first;

                curr = 0;
                sign  =1;

            }
        }

        return res + sign  * curr;


        
    }
};
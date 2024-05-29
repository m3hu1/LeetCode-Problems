class Solution {
public:
    int numSteps(string s) {
        int c = 0;
        int ans = 0;
        for (int i = s.size() - 1; i >= 1; i--) {
            if ((c + s[i] - '0') % 2 == 1) {
                c = 1;
                ans = ans + 2;
            } else ans = ans + 1;
        }
        return c + ans;
    }
};
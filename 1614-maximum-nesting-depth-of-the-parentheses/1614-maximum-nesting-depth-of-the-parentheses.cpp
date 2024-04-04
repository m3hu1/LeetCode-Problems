class Solution {
public:
    int maxDepth(string s) {
        int ans = INT_MIN;
        int cnt = 0;
        for (auto ch : s) {
            if (ch == '(') cnt++;
            else if (ch == ')') cnt--;
            ans = max(ans, cnt);
        }
        return ans;
    }
};
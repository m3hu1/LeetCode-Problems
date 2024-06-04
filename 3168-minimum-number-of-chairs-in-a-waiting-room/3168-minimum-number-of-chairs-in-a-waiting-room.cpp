class Solution {
public:
    int minimumChairs(string s) {
        int cnt = 0;
        int ans = 0;
        for (auto i : s) {
            if (i == 'E') {
                cnt++;
            } else if (i == 'L') cnt--;
            ans = max(ans, cnt);
        }
        return ans;
    }
};
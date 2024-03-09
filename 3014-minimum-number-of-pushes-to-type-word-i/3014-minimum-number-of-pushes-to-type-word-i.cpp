class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int cnt = 0;
        while (n > 0) {
            cnt += n;
            n -= 8;
        }
        return cnt;
    }
};
class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0;
        int right = s.size() - 1;
        while(right >= 0) {
            if(s[right] != ' ') {
                ans++;
            } else if(ans > 0) return ans;
            right--;
        }
        return ans;
    }
};
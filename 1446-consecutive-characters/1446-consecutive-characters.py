class Solution:
    def maxPower(self, s: str) -> int:
        ans = 0
        cnt = 0

        for i in range(1, len(s)):
            if s[i - 1] == s[i]:
                cnt += 1
                ans = max(ans, cnt)
            else:
                cnt = 0
        
        return ans + 1
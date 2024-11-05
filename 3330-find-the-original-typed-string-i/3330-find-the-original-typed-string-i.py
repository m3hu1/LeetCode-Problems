class Solution:
    def possibleStringCount(self, s: str) -> int:
        ans = 0
        
        for i in range(1, len(s)):
            if s[i - 1] == s[i]:
                ans += 1
        
        return ans 
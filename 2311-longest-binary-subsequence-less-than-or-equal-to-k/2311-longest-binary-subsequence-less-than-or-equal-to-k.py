class Solution:
    def longestSubsequence(self, s: str, k: int) -> int:
        x = ""
        ans = 0

        for l in reversed(s):
            x = l + x
            if int(x, 2) <= k:
                ans += 1
            elif l == '0':
                ans += 1
        
        return ans
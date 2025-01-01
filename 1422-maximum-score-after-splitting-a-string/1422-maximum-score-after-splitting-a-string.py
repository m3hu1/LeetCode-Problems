class Solution:
    def maxScore(self, s: str) -> int:
        z, o, ans = 0, 0, float('-inf')

        for i in range(len(s)):
            if s[i] == '0':
                z += 1
            else:
                o += 1
            if i != len(s) - 1:
                ans = max(ans, z - o)
                
        return ans + o
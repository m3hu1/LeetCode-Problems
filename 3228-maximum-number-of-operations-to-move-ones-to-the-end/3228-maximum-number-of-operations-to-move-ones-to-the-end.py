class Solution:
    def maxOperations(self, s: str) -> int:
        ans = 0
        ones = 0

        for ch in s:
            if ch == '1':
                ones += 1

        for i in range(len(s) - 1, -1, -1):
            if s[i] == '0' and (i + 1 == len(s) or s[i + 1] == '1'):
                ans += ones
            if s[i] == '1':
                ones -= 1

        return ans
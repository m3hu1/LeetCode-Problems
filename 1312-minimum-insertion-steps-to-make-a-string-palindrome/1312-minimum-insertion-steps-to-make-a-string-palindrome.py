class Solution:
    def minInsertions(self, s: str) -> int:
        @cache
        def helper(i, j):
            if j < i or j == i:
                return 0
            if s[i] == s[j]:
                return helper(i + 1, j - 1)
            return 1 + min(helper(i + 1, j), helper(i, j - 1))
        
        return helper(0, len(s) - 1)
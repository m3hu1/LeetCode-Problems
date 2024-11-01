class Solution:
    def makeFancyString(self, s: str) -> str:
        ans = []

        for i in range(len(s)):
            if s[i] == s[-1] == s[-2] and len(ans) >= 2:
                continue
        ans.append(s[-1])
        
        return ''.join(ans)
class Solution:
    def makeSmallestPalindrome(self, s: str) -> str:
        ans = list(s)

        for i in range(len(s)):
            if ans[i] != ans[len(s) - i - 1]:
                lex = min(ans[i], ans[len(s) - i - 1])
                ans[i] = ans[len(s) - i - 1] = lex
            
        return "".join(ans)
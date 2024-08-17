class Solution:
    def getEncryptedString(self, s: str, k: int) -> str:
        n = len(s)
        # i = 0
        # s = list(s)
        ans = ["" for _ in range(n)]

        for i in range(n):
            ans[i] = s[(i + k) % n]
        
        return "".join(ans)
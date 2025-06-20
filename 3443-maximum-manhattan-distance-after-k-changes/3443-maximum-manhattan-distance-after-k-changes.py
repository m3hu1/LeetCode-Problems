class Solution:
    def maxDistance(self, s: str, k: int) -> int:
        x = y = ans = 0
        n = len(s)
        
        for i in range(n):
            if s[i] == "N":
                x += 1
            elif s[i] == "S":
                x -= 1
            elif s[i] == "E":
                y += 1
            elif s[i] == "W":
                y -= 1
            ans = max(ans, min(abs(x) + abs(y) + k * 2, i + 1))

        return ans
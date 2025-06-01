class Solution:
    def distributeCandies(self, n: int, l: int) -> int:
        ans = 0

        for i in range(min(l, n) + 1):
            if n - i > 2 * l: continue
            ans += min(n - i, l) - max(0, n - i - l) + 1

        return ans
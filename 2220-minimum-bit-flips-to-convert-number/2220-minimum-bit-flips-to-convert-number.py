class Solution:
    def minBitFlips(self, s: int, g: int) -> int:
        ans = 0

        while s > 0 or g > 0:
            if s % 2 != g % 2:
                ans += 1
            s = s // 2
            g = g // 2

        return ans
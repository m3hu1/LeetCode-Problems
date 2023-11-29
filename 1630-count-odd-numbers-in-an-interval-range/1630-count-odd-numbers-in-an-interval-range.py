# m3hu1
class Solution:
    def countOdds(self, l: int, h: int) -> int:
        if l % 2 == 1 or h % 2 == 1:
            return (h - l) // 2 + 1
        else:
            return (h - l) // 2
# m3hu1
class Solution:
    def convertToTitle(self, columnNumber: int) -> str:
        ab = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
        r = ''
        while columnNumber > 0:
            columnNumber -= 1
            r = ab[(columnNumber) % 26] + r
            columnNumber //= 26
        return r
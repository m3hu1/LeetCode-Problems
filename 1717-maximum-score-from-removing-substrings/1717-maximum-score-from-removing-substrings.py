class Solution:
    def maximumGain(self, s: str, x: int, y: int) -> int:
        ans = 0
        a, b = 'a', 'b'

        if x < y:
            x, y = y, x
            a, b = b, a
        
        idx = 0
        i, j = 0, 0

        while idx < len(s):
            char = s[idx]
            if char == a:
                i += 1
            elif char == b:
                if i > 0:
                    i -= 1
                    ans += x
                else:
                    j += 1
            else:
                ans += min(i, j) * y
                i, j = 0, 0
            idx += 1
        
        ans += min(i, j) * y

        return ans
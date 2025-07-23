class Solution:
    def maximumGain(self, s: str, x: int, y: int) -> int:
        ans, af, bf = 0, 0, 0

        for c in s:
            if c == 'a':
                if y >= x and bf > 0:
                    bf -= 1
                    ans += y
                    continue
                af += 1
                continue
            if c == 'b':
                if x >= y and af > 0:
                    af -= 1
                    ans += x
                    continue
                bf += 1
                continue
            ans += min(af, bf) * min(x, y)
            bf = 0
            af = 0
        
        return ans + min(af, bf) * min(x, y)
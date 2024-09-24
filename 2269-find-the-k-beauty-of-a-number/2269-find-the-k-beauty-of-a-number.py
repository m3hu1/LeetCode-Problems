class Solution:
    def divisorSubstrings(self, num: int, k: int) -> int:
        s = str(num)
        idx = ans = d = 0
        
        for i in range(len(s)):
            d = d * 10 + int(s[i])
            if i >= k - 1:
                if d != 0 and num % d == 0:
                    ans += 1
                d -= int(s[idx]) * (10 ** (k - 1))
                idx += 1
        
        return ans
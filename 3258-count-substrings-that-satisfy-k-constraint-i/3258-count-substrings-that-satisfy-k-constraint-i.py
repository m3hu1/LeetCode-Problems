class Solution:
    def countKConstraintSubstrings(self, s: str, k: int) -> int:
        ans = 0
        l = r = ones = zeroes = 0

        while r < len(s):
            if s[r] == '1':
                ones += 1
            else:
                zeroes += 1
            while ones > k and zeroes > k:
                if s[l] == '1':
                    ones -= 1
                else:
                    zeroes -= 1
                l += 1
            ans += r - l + 1
            r += 1
            
        return ans
class Solution:
    def reverseOnlyLetters(self, s: str) -> str:
        s = list(s)
        l = 0
        r = len(s) - 1

        while l < r:
            if not s[l].isalpha():
                l += 1
                continue
            if not s[r].isalpha():
                r -= 1
                continue
            s[l], s[r] = s[r], s[l]
            l += 1
            r -= 1
        
        return "".join(s)
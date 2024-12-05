class Solution:
    def canChange(self, s: str, t: str) -> bool:
        l = r = 0

        for a, b in zip(s, t):
            if b == "L":
                l += 1
            if a == "R":
                r += 1
            if r and l:
                return False
            if a == "L":
                l -= 1
            if b == "R":
                r -= 1
            if r < 0 or l < 0:
                return False

        return not l and not r
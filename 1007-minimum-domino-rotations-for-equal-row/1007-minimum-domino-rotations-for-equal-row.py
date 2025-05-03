class Solution:
    def minDominoRotations(self, t: List[int], b: List[int]) -> int:
        mini = float('inf')

        def c(x, A, B):
            r = 0
            for a, b in zip(A, B):
                if a == x: continue
                if b == x: r += 1
                else: return float('inf')
            return r

        cs = {t[0], b[0]}
        
        for x in cs:
            mini = min(mini, c(x, t, b), c(x, b, t))

        return -1 if mini == float('inf') else mini
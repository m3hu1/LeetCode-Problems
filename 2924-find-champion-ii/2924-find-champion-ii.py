class Solution:
    def findChampion(self, n: int, e: List[List[int]]) -> int:
        a = {x[1] for x in e}
        b = {x for x in range(n)}
        d = list(b - a)

        if len(d) != 1:
            return -1
        
        return d[0]
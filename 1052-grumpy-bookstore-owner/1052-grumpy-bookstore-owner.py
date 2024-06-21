class Solution:
    def maxSatisfied(self, cus: List[int], g: List[int], m: int) -> int:
        max_satisfied = 0
        tot = 0
        
        for r in range(len(cus)):
            if g[r] == 0:
                tot += cus[r]
        
        curr = 0

        for r in range(len(cus)):
            if g[r] == 1:
                curr += cus[r]
            l = r - m
            if g[l] == 1 and l >= 0:
                curr -= cus[l]
            max_satisfied = max(max_satisfied, curr + tot)
        
        return max_satisfied
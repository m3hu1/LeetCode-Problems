class Solution:
    def minNumberOperations(self, target: List[int]) -> int:
        ans = c = 0

        for t in target:
            if c >= t:
                c = t
                continue
            ans = ans - c + t
            c = t
        
        return ans
class Solution:
    def findLUSlength(self, a: str, b: str) -> int:
        if a == b:
            return -1
        
        n1, n2 = len(a), len(b)

        if n1 > n2:
            return n1
        
        return n2
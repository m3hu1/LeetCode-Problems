from typing import List

class Solution:
    def minimumCost(self, src: str, tgt: str, orig: List[str], chgd: List[str], cst: List[int]) -> int:
        alphabets = 26
        g = [[float('inf')] * alphabets for _ in range(alphabets)]
        
        for o, c, cost in zip(orig, chgd, cst):
            u = ord(o) - ord('a')
            v = ord(c) - ord('a')
            g[u][v] = min(g[u][v], cost)
        
        for k in range(alphabets):
            for i in range(alphabets):
                for j in range(alphabets):
                    g[i][j] = min(g[i][j], g[i][k] + g[k][j])
                    
        ans = 0

        for s, t in zip(src, tgt):
            if s == t:
                continue
            u = ord(s) - ord('a')
            v = ord(t) - ord('a')
            if g[u][v] == float('inf'):
                return -1
            ans += g[u][v]
        
        return ans
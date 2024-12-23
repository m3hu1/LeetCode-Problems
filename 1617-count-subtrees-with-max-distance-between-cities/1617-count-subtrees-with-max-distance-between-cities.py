class Solution:
    def countSubgraphsForEachDiameter(self, n: int, edges: list[list[int]]) -> list[int]:
        g = [[float('inf')] * n for _ in range(n)]
        
        for i, j in edges:
            i, j = i - 1, j - 1
            g[i][j] = g[j][i] = 1
        
        for k in range(n):
            for i in range(n):
                for j in range(n):
                    g[i][j] = min(g[i][j], g[i][k] + g[k][j])
        
        ans = [0] * (n - 1)
        
        for s in range(1 << n):
            k = bin(s).count('1')
            e, d = 0, 0
            
            for i in range(n):
                if s & (1 << i):
                    for j in range(i + 1, n):
                        if s & (1 << j):
                            if g[i][j] == 1:
                                e += 1
                            d = max(d, g[i][j])
            
            if e == k - 1 and d > 0:
                ans[d - 1] += 1
        
        return ans
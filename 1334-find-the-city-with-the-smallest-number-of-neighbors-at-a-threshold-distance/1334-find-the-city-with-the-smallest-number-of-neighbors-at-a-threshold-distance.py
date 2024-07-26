class Solution:
    def findTheCity(self, N: int, edges: List[List[int]], dt: int) -> int:
        ans = None
        g = [[float('inf')] * N for _ in range(N)]

        for i in range(N):
            g[i][i] = 0
            
        for u, v, w in edges:
            g[u][v] = w
            g[v][u] = w
            
        for k in range(N):
            for i in range(N):
                for j in range(N):
                    g[i][j] = min(g[i][j], g[i][k] + g[k][j])
                    
        curr = float('inf')

        for i in range(N):
            temp = 0
            for j in range(N):
                if g[i][j] <= dt:
                    temp += 1
            if temp <= curr:
                ans = i
                curr = temp
                
        return ans
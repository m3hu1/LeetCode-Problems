class Solution:
    def mostProfitablePath(self, e: List[List[int]], bob: int, amount: List[int]) -> int:
        n = 1 + len(e)
        g = [[] for _ in range(n)]

        for u, v in e: 
            g[u].append(v)
            g[v].append(u)

        vis = [False] * n
        
        def dfs(u, d): 
            vis[u] = True
            ans = -inf 
            dist = 0 if u == bob else n

            for v in g[u]: 
                if not vis[v]: 
                    x, y = dfs(v, d + 1)
                    ans = max(ans, x)
                    dist = min(dist, y)

            if ans == -inf: ans = 0
            if d == dist: ans += amount[u] // 2
            if d < dist: ans += amount[u]

            return ans, dist + 1
        
        return dfs(0, 0)[0]
class Solution:
    def remainingMethods(self, n: int, k: int, edges: List[List[int]]) -> List[int]:
        q = []
        q.append(k)
        adj = [[] for _ in range(n)]

        for u, v in edges:
            adj[u].append(v)

        vis = [False for _ in range(n)]
        vis[k] = True

        for node in q:
            for nei in adj[node]:
                if not vis[nei]:
                    q.append(nei)
                    vis[nei] = True

        if any(vis[u] < vis[v] for u, v in edges):
            return list(range(n))
        
        ans = []

        for i in range(n):
            if not vis[i]:
                ans.append(i)
        
        return ans
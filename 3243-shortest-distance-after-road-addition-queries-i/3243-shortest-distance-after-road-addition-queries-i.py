class Solution:
    def shortestDistanceAfterQueries(self, n, q) -> List[int]:
        adj = defaultdict(list)

        for i in range(n - 1):
            adj[i].append(i + 1)
        
        def bfs():
            d = [-1 for _ in range(n)]
            d[0] = 0
            q = deque()
            q.append(0)
            while q:
                node = q.popleft()
                for nei in adj[node]:
                    if d[nei] == -1:
                        d[nei] = 1 + d[node]
                        q.append(nei)
            return d[-1]
        
        ans = []
        
        for u, v in q:
            adj[u].append(v)
            res = bfs()
            ans.append(res)
        
        return ans
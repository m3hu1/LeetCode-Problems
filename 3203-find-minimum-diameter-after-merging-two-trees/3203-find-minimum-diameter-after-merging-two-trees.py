class Solution:
    def minimumDiameterAfterMerge(self, e1, e2) -> int:
        def bfs(node, g):
            vis = set()
            q = deque([(node, 0)])
            temp, maxi = node, 0
            while q:
                curr, dist = q.popleft()
                vis.add(curr)
                if dist > maxi:
                    temp, maxi = curr, dist
                for nei in g[curr]:
                    if nei not in vis:
                        q.append((nei, dist + 1))
            return temp, maxi
        
        def td(edges, n):
            if n == 1:
                return 0
            g = defaultdict(list)
            for u, v in edges:
                g[u].append(v)
                g[v].append(u)
            temp, _ = bfs(0, g)
            _, d = bfs(temp, g)
            return d
        
        n, m = len(e1) + 1, len(e2) + 1
        d1, d2 = td(e1, n), td(e2, m)
        ans = max(d1, d2, (d1 + 1) // 2 + (d2 + 1) // 2 + 1)
        
        return
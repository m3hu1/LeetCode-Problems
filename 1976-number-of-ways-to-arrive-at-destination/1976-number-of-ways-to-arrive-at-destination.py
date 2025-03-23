class Solution:
    def countPaths(self, n: int, rs: List[List[int]]) -> int:
        mod = 10**9 + 7

        g = defaultdict(list)
        for u, v, t in rs:
            g[u].append((v, t))
            g[v].append((u, t))

        mini = [float('inf')] * n
        ws = [0] * n
        mini[0] = 0
        ws[0] = 1

        heap = [(0, 0)]

        while heap:
            t, node = heappop(heap)
            if t > mini[node]:
                continue
            for nei, tt in g[node]:
                new_t = t + tt
                if new_t < mini[nei]:
                    mini[nei] = new_t
                    ws[nei] = ws[node]
                    heappush(heap, (new_t, nei))
                elif new_t == mini[nei]:
                    ws[nei] = (ws[nei] + ws[node]) % mod

        return ws[n - 1]
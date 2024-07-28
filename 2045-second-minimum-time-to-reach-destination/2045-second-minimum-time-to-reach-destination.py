class Solution:
    def secondMinimum(self, n: int, edges: List[List[int]], tt: int, change: int) -> int:
        g = defaultdict(set)

        for u, v in edges:
            g[u].add(v)
            g[v].add(u)
        
        q = {1}
        at = 0
        dt = 0
        vis_cnt = Counter()
        
        while q:
            sz = len(q)
            nxt = set()
            for _ in range(sz):
                node = q.pop()
                if node == n and vis_cnt[node] == 1:
                    return at
                if vis_cnt[node] == 2:
                    continue
                vis_cnt[node] += 1
                for nei in g[node]:
                    if vis_cnt[nei] < 2:
                        nxt.add(nei)

            q = nxt
            at = dt + tt
            cycle, _ = divmod(at, change)
            
            if cycle % 2 == 1:
                dt = change * (cycle + 1)
            else:
                dt = at
        
        return -1
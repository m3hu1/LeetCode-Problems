class Solution:
    def maxProbability(self, n: int, edges: List[List[int]], sp: List[float], start: int, end: int) -> float:
        g = defaultdict(list)

        for i in range(len(edges)):
            s, d = edges[i]
            g[s].append([d, sp[i]])
            g[d].append([s, sp[i]])
        
        pq = [(-1, start)]
        vis = set()

        while pq:
            p, node = heapq.heappop(pq)
            vis.add(node)
            if node == end:
                return -1 * p
            for nei, prob in g[node]:
                if nei not in vis:
                    heapq.heappush(pq, (p * prob, nei))
        
        return 0
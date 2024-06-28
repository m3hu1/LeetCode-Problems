class Solution:
    def maximumImportance(self, n: int, roads: List[List[int]]) -> int:
        edges = [0 for i in range(n)]

        for u, v in roads:
            edges[u] += 1
            edges[v] += 1
        
        edges.sort()
        val = 1
        ans = 0

        for cnt in edges:
            ans += cnt * val
            val += 1
        
        return ans
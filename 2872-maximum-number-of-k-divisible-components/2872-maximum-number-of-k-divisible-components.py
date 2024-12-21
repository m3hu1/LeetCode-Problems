class Solution:
    def maxKDivisibleComponents(self, n: int, e: List[List[int]], v: List[int], k: int) -> int:
        adj = [[] for _ in range(n)]

        for u, v_ in e: 
            adj[u].append(v_)
            adj[v_].append(u)
        
        def helper(node, p): 
            for nei in adj[node]: 
                if nei != p: 
                    v[node] += helper(nei, node)
            return v[node]
        
        helper(0, -1)

        return sum(x % k == 0 for x in v)
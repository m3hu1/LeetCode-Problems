class Solution:
    def getAncestors(self, n: int, edges: List[List[int]]) -> List[List[int]]:
        ans = []
        adj_list = defaultdict(list)

        for u, v in edges:
            adj_list[v].append(u) # u ---> v

        @cache
        def dfs(node):
            poorvaj = set()
            for papa in adj_list[node]:
                poorvaj.add(papa)
                poorvaj.update(dfs(papa))
            return poorvaj
        
        for i in range(n):
            ans.append(dfs(i))
        
        final = []

        for sets in ans:
            final.append(sorted(sets))
        
        return final
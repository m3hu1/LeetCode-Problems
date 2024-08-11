class Solution:
    def countGoodNodes(self, edges: List[List[int]]) -> int:
        good = 0
        g = defaultdict(list)

        for u, v in edges:
            g[u].append(v)
            g[v].append(u)

        def dfs(node, papa) -> int:
            nonlocal good
            temp = []
            ans = 1

            for nei in g[node]:
                if nei == papa:
                    continue

                curr = dfs(nei, node)
                ans += curr
                temp.append(curr)
                
            if len(set(temp)) <= 1:
                good += 1

            return ans
        
        dfs(0, -1)

        return good
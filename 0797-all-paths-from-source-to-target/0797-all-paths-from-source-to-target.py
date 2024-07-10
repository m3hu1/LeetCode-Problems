class Solution:
    def allPathsSourceTarget(self, g: List[List[int]]) -> List[List[int]]:
        ans = []
        curr = []

        def dfs(node):
            curr.append(node)
            if node == len(g) - 1:
                ans.append(curr.copy())
                return
            for nei in g[node]:
                dfs(nei)
                curr.pop()
        
        dfs(0)
        return ans
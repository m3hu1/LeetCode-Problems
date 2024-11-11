class Solution:
    def findSmallestSetOfVertices(self, n: int, edges: List[List[int]]) -> List[int]:
        ans = []
        flag = [False] * n

        for idx, edge in enumerate(edges):
            t = edge[1]
            flag[t] = True
        
        for idx in range(n):
            if flag[idx] == False:
                ans.append(idx)
        
        # print(flag)
        return ans
class Solution:
    def maxNumEdgesToRemove(self, n: int, edges: List[List[int]]) -> int:
        def find(g: List[int], index: int) -> int:
            while g[index] != index:
                index = g[index]
            return index

        def tryUnion(g: List[int], r: List[int], u: int, v: int) -> bool:
            rootIndex1 = find(g, u-1)
            rootIndex2 = find(g, v-1)
            if rootIndex1 == rootIndex2:
                return False
            if r[rootIndex1] > r[rootIndex2]:
                g[rootIndex2] = rootIndex1
            elif r[rootIndex1] < r[rootIndex2]:
                g[rootIndex1] = rootIndex2
            else:
                g[rootIndex1] = rootIndex2
                r[rootIndex2] += 1
            return True

        def isConnected(g: List[int]) -> bool:
            root = find(g, g[0])
            for g1 in g[1:]:
                if find(g, g1) != root:
                    return False
            return True

        gA = [i for i in range(n)]
        rA = [1 for _ in range(n)]
        gB = [i for i in range(n)]
        rB = [1 for _ in range(n)]
        maxToRemove = 0

        for t, u, v in edges:
            if t == 3:
                unionAlice = tryUnion(gA, rA, u, v)
                unionBob = tryUnion(gB, rB, u, v)
                if not unionAlice and not unionBob:
                    maxToRemove += 1

        for t, u, v in edges:
            if t == 1:
                if not tryUnion(gA, rA, u, v):
                    maxToRemove += 1
            elif t == 2:
                if not tryUnion(gB, rB, u, v):
                    maxToRemove += 1

        if len(edges) - maxToRemove < n - 1:
            return -1

        if isConnected(gA) and isConnected(gB):
            return maxToRemove
        else:
            return -1
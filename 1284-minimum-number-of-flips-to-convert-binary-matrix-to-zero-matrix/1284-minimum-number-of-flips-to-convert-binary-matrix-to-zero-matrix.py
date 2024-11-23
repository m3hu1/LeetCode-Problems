class Solution:
    def minFlips(self, mat):
        m, n = len(mat), len(mat[0])
        start = sum((mat[i][j] << (i * n + j)) for i in range(m) for j in range(n))

        if start == 0:
            return 0

        dirn = [(-1, 0), (1, 0), (0, -1), (0, 1), (0, 0)]
        t = 0
        vis = set([start])
        q = deque([(start, 0)])
        
        def flip(s, i, j):
            bit = 1 << (i * n + j)
            s ^= bit
            for di, dj in dirn[:-1]:
                ni, nj = i + di, j + dj
                if 0 <= ni < m and 0 <= nj < n:
                    s ^= 1 << (ni * n + nj)
            return s
        
        while q:
            s, ss = q.popleft()
            for i in range(m):
                for j in range(n):
                    ns = flip(s, i, j)
                    if ns == t:
                        return ss + 1
                    if ns not in vis:
                        vis.add(ns)
                        q.append((ns, ss + 1))
        
        return -1
class Solution:
    def minimumArea(self, grid: List[List[int]]) -> int:
        m, n = len(grid), len(grid[0])
        l, t, b, r = n, m, 0, 0
        
        for i in range(m):
            for j in range(n):
                if grid[i][j]:
                    l = min(l, j)
                    t = min(t, i)
                    b = max(b, i)
                    r = max(r, j)
        
        return (b - t + 1) * (r - l + 1)
        
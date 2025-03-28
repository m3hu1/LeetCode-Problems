class Solution:
    def maxPoints(self, grid: List[List[int]], qs: List[int]) -> List[int]
        m, n = len(grid), len(grid[0])
        q = [(grid[0][0], 0, 0)]
        mp = {(0, 0): grid[0][0]}

        while len(q):
            mx, x, y = heapq.heappop(q)
            for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                xx = x + dx
                yy = y + dy
                if (xx, yy) not in mp and xx >= 0 and xx < m and yy >= 0 and yy < n:
                    maxi = max(mx, grid[xx][yy])
                    heapq.heappush(q, (maxi, xx, yy))
                    mp[(xx, yy)] = maxi

        arr = sorted(list(mp.values()))
        return [bisect_left(arr ,  x) for x in qs]

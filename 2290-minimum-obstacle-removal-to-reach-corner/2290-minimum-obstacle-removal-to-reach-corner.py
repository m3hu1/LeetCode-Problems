class Solution:
    def minimumObstacles(self, grid: List[List[int]]) -> int:
        q = []          
        minD = [[float('inf')] * len(grid[0]) for _ in range(len(grid))]
        minD[0][0] = grid[0][0]
        heappush(q, (minD[0][0], 0, 0))
        dirn = [(0, 1), (1, 0), (0, -1), (-1, 0)]   

        while q:
            a, x, y = heappop(q)
            for move in dirn:
                nx = x + move[0]
                ny = y + move[1]
                if len(grid) > nx >= 0 <= ny < len(grid[0]):
                    if grid[nx][ny] + a < minD[nx][ny]:
                        minD[nx][ny] = grid[nx][ny] + a
                        heappush(q, (a + grid[nx][ny], nx, ny))
        
        return minD[len(grid) - 1][len(grid[0]) - 1]
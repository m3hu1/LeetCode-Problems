class Solution:
    def minimumTime(self, grid: List[List[int]]) -> int:
        if grid[1][0] > 1 and grid[0][1] > 1: 
            return -1

        heap = []
        heap.append((0, 0, 0))

        arr = [[inf for _ in range(len(grid[0]))] for _ in range(len(grid))]
        arr[0][0] = 0

        while heap:
            d, i, j = heappop(heap)
            if i == len(grid) - 1 and j == len(grid[0]) - 1:
                return d
            for x, y in (i + 1, j), (i, j + 1), (i - 1, j), (i, j - 1):
                if 0 <= x < len(grid) and 0 <= y < len(grid[0]):
                    temp = max(d + 1, grid[x][y])
                    temp += (temp - x - y) % 2
                    if temp < arr[x][y]:
                        arr[x][y] = temp
                        heappush(heap, (temp, x, y))
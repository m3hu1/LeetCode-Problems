class Solution:
    def maxIncreaseKeepingSkyline(self, grid: List[List[int]]) -> int:
        ans = 0
        rmax = [max(row) for row in grid]
        cmax = [max(col) for col in zip(*grid)]

        for i in range(len(grid)):
            for j in range(len(grid)):
                ans += min(rmax[i], cmax[j]) - grid[i][j]

        return ans
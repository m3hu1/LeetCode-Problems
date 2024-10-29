class Solution:
    def maxMoves(self, grid):
        @cache
        def helper(row, col):
            if col == len(grid[0]) - 1:
                return 0
            maxi = 0
            for r in (row - 1, row, row + 1):
                if 0 <= r < len(grid) and grid[r][col + 1] > grid[row][col]:
                    maxi = max(maxi, 1 + helper(r, col + 1))
            return maxi

        return max(helper(r, 0) for r in range(len(grid)))
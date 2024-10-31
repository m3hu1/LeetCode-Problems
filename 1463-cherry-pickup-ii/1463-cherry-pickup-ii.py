class Solution:
    def cherryPickup(self, grid: List[List[int]]) -> int:
        @cache
        def helper(a, b, row):
            ans = 0

            if row == len(grid) - 1:
                return grid[row][a] + grid[row][b]

            for i in range(-1, 2):
                for j in range(-1, 2):
                    if (i + a == j + b) or (i + a == b and a == b + j) or (i + a < 0 or j + b >= len(grid[0])):
                        continue
                    ans = max(ans, grid[row][a] + grid[row][b] + helper(a + i, b + j, row + 1))

            return ans
        
        n = len(grid[0])

        return helper(0, n - 1, 0)
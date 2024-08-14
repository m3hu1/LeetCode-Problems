class Solution:
    def countNegatives(self, grid: List[List[int]]) -> int:
        ans = 0

        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] < 0:
                    ans += 1
            
        return ans
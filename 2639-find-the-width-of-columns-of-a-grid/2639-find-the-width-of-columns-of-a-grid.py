class Solution:
    def findColumnWidth(self, grid: List[List[int]]) -> List[int]:
        def getLength(num):
            length = 0
            while num != 0:
                length += 1
                num = num // 10
            return length

        ans = [1] * len(grid[0])
        # max_len = 0

        for i in range(len(grid)):
            # max_len = 0
            for j in range(len(grid[0])):
                # curr_len = getLength(grid[i][j])
                # ans.append(max(max_len, curr_len))
                ans[j] = max(ans[j], len(str(grid[i][j])))
        
        return ans
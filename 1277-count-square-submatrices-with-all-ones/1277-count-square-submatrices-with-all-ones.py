class Solution:
    def countSquares(self, mat):
        m, n = len(mat), len(mat[0])
        
        @cache
        def dp(i, j):
            if i < 0 or j < 0:
                return 0
            if mat[i][j] == 0:
                return 0
            return 1 + min(dp(i-1, j), dp(i, j-1), dp(i-1, j-1))
        
        ans = 0
    
        for i in range(m):
            for j in range(n):
                ans += dp(i, j)
        
        return ans
class Solution:
    def dfs(self, c, n, x):
        if c > n:
            return
        else:
            x.append(c)
            for i in range(10):
                if 10 * c > n - i: return
                self.dfs(10 * c + i, n, x)

    def lexicalOrder(self, n):
        ans = []
        for i in range(1, 10):
            self.dfs(i, n, ans)
        return ans

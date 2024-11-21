class Solution:
    def countUnguarded(self, m, n, g, w):
        flag = [[0] * n for _ in range(m)]

        for a, b in (w + g):
            flag[a][b] = 1

        dirn = [(0, 1), (0, -1), (1, 0), (-1, 0)]

        for a, b in g:
            for dx, dy in dirn:
                x = a
                y = b
                while 0 <= x + dx < m and 0 <= y + dy < n and flag[x + dx][y + dy] != 1:
                    x += dx
                    y += dy
                    flag[x][y] = 2

        ans = 0

        for i in range(m):
            for j in range(n):
                if flag[i][j] == 0:
                    ans += 1
        
        return ans
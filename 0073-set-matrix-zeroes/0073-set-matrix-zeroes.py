class Solution:
    def setZeroes(self, g: List[List[int]]) -> None:
        m, n = len(g), len(g[0])
        z = []

        for i in range(len(g)):
            for j in range(len(g[0])):
                if g[i][j] == 0:
                    z.append((i,j))

        for row, col in z:
            for i in range(0, n):
                g[row][i] = 0
            for j in range(0, m):
                g[j][col] = 0
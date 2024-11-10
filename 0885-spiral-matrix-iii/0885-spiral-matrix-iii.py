class Solution:
    def spiralMatrixIII(self, rows: int, cols: int, rs: int, cs: int) -> List[List[int]]:
        ans = []
        dirn = [[0,1], [1,0], [0, -1], [-1,0]]
        ans.append([rs, cs])
        idx = s = 0
        up = 1

        while len(ans) < rows * cols:
            for i in range(up):
                rs, cs = rs + dirn[idx][0], cs + dirn[idx][1]
                if 0 <= rs < rows and 0 <= cs < cols:
                    ans.append([rs, cs])
            s += 1
            if s % 2 == 0:
                s = 0
                up += 1
            idx = (idx + 1) % 4

        return ans
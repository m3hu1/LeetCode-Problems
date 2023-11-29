# m3hu1
class Solution:
    def diagonalSum(self, mat: List[List[int]]) -> int:

        n=len(mat)
        r=[] 

        for i in range(n):
            for j in range(n):

                if i==j or i+j==n-1:
                    r.append(mat[i][j])
        return sum(r)          
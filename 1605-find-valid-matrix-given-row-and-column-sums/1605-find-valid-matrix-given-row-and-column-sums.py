class Solution:
    def restoreMatrix(self, rs: List[int], cs: List[int]) -> List[List[int]]:
        ans = [[None] * len(cs) for r in range(len(rs))

        for i in range(len(rs)):
            for j in range(len(cs)):
                temp = min(rs[i], cs[j])
                rs[i] -= temp
                cs[j] -= temp
                ans[i][j] = temp
        
        return ans
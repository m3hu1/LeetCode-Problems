class Solution:
    def maxMatrixSum(self, matrix: List[List[int]]) -> int:
        ans = ne = 0
        mini = float('inf')

        for r in matrix:
            for e in r:
                ne += e < 0
                ans += abs(e)
                mini = min(mini, abs(e))

        return ans if ne % 2 == 0 else ans - 2 * mini
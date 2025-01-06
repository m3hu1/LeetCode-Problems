class Solution:
    def minOperations(self, bo: str) -> List[int]:
        m, b = 0, 0; ans = [0 for _ in range(len(bo))]

        for i in range(len(bo)):
            ans[i] = m + b
            m += b
            b += int(bo[i])

        m, b = 0, 0

        for i in reversed(range(len(bo))):
            ans[i] += m + b
            m += b
            b += int(bo[i])

        return 
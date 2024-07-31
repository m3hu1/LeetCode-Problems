class Solution:
    def minHeightShelves(self, b: List[List[int]], sw: int) -> int:
        dp = [0] + [float('inf')] * len(b)

        for i in range(1, len(dp)):
            currh = currw = 0
            for j in range(i - 1, -1, -1):
                currw += b[j][0]
                if currw > sw: 
                    break
                currh = max(currh, b[j][1])
                dp[i] = min(dp[i], dp[j] + currh)

        return dp[-1
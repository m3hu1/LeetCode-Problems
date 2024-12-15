class Solution:
    def maxAverageRatio(self, c, es):
        ans = []

        def helper(a, b):
            return (a + 1) / (b + 1) - a / b 
        
        for i, j in c:
            heappush(ans,(-1 * helper(i, j), i, j))

        while es:
            avg, a, b = heappop(ans)
            heappush(ans, (-1 * helper(a + 1, b + 1), a + 1, b + 1))
            es -= 1

        return sum([i / j for _, i, j in ans])
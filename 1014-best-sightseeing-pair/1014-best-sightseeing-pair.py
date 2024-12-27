class Solution:
    def maxScoreSightseeingPair(self, v: List[int]) -> int:
        ans = idx = SUM = 0
        temp = v[0]

        for i in range(1, len(v)):
            SUM = temp + v[i] + idx - i
            ans = max(ans, SUM)
            if v[i] + i > temp + idx:  
                idx = i
                temp = v[i]

        return ans
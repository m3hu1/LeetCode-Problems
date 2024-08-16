class Solution:
    def maxDistance(self, arrays: List[List[int]]) -> int:
        ans = 0
        maxi = arrays[0][-1]
        mini = arrays[0][0]

        for i in range(1, len(arrays)):
            currmaxi = arrays[i][-1]
            currmini = arrays[i][0]
            ans = max(ans, abs(currmaxi - mini), abs(maxi - currmini))
            maxi = max(maxi, currmaxi)
            mini = min(mini, currmini)

        return ans
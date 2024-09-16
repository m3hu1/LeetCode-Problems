class Solution:
    def findMinDifference(self, tp: List[str]) -> int:
        arr = [0] * len(tp)

        for i, time in enumerate(tp):
            hrs = int(time[:2])
            mins = int(time[3:])
            arr[i] = 60 * hrs + mins

        arr.sort()
        ans = 60 * 24

        for i in range(1, len(tp)):
            ans = min(ans, arr[i] - arr[i - 1])

        ans = min(ans, 60 * 24 - (arr[-1] - arr[0]))
        
        return ans
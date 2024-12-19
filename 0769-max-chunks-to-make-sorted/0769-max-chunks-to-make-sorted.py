class Solution:
    def maxChunksToSorted(self, arr: List[int]) -> int:
        ans = SUM = pSUM = 0

        for i in range(len(arr)):
            pSUM += arr[i]
            SUM += i
            if pSUM == SUM:
                ans += 1
        
        return ans
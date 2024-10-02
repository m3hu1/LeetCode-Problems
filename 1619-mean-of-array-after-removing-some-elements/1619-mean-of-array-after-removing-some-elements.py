class Solution:
    def trimMean(self, arr: List[int]) -> float:
        arr.sort()
        x = len(arr) // 20
        SUM = 0

        for i in range(x, len(arr) - x):
            SUM += arr[i]
        
        return SUM / (len(arr) - x - x)
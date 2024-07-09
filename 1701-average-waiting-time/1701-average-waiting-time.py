class Solution:
    def averageWaitingTime(self, cus: List[List[int]]) -> float:
        ans = 0
        curr = 0

        for arr, time in cus:
            curr = max(arr, curr)
            ans += (curr - arr) + time
            curr = time + curr
        
        return ans / len(cus)
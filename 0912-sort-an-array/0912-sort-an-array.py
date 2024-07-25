class Solution:
    def sortArray(self, nums: List[int]) -> List[int]:
        temp_arr = []

        for num in nums:
            heapq.heappush(temp_arr, num)

        ans = [0 for _ in range(len(temp_arr))]

        for i in range(len(temp_arr)):
            num = heapq.heappop(temp_arr)
            ans[i] = num

        return ans
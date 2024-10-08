class Solution:
    def minimumCost(self, nums: List[int]) -> int:
        heap = []

        for num in nums[1 : ]:
            heapq.heappush(heap, num)
        
        return nums[0] + heapq.heappop(heap) + heapq.heappop(heap)
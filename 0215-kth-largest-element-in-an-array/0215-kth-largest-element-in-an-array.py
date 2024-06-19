class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        heap = []

        def push(heap, num):
            heapq.heappush(heap, num)
        
        def pop():
            return heapq.heappop(heap)

        for num in nums:
            push(heap, num)
            while len(heap) > k:
                pop()
        return pop()
# m3hu1
class Solution:
    def largestPerimeter(self, nums: List[int]) -> int:
        nums = [-num for num in nums]
        heapq.heapify(nums)
        c = -heapq.heappop(nums) 
        b = -heapq.heappop(nums) 
        a = -heapq.heappop(nums) 
        while nums and c >= (a + b):
            c = b
            b = a
            a = -heapq.heappop(nums)

        return (a + b + c)*(c < (a + b))
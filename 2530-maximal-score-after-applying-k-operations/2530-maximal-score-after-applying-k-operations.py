class Solution:
    def maxKelements(self, nums: List[int], k: int) -> int:
        max_heap = []

        for num in nums:
            max_heap.append(-1 * num)
        
        heapify(max_heap)
        ans = 0

        while k:
            maxi = -heappop(max_heap)
            ans += maxi
            new = math.ceil(maxi / 3)
            heappush(max_heap, -new)
            k -= 1
        
        return ans
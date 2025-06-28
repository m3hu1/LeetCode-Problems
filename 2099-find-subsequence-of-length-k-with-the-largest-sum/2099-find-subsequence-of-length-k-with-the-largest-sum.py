
class Solution:
    def maxSubsequence(self, nums: List[int], k: int) -> List[int]:
        heap = []

        for idx, val in enumerate(nums):
            heappush(heap, (-val, idx))
        
        ans = []

        while k:
            val, idx = heappop(heap)
            ans.append((-val, idx))
            k -= 1
        
        ans.sort(key = lambda x: x[1])

        return list(i[0] for i in ans)
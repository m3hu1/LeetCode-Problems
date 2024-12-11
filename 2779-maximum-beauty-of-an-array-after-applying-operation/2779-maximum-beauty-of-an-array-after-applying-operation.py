class Solution:
    def maximumBeauty(self, nums: List[int], k: int) -> int:
        nums.sort()
        ans = 0

        for i in range(len(nums)):
            idx = bisect_right(nums, nums[i] + k * 2)
            ans = max(ans, idx - i)
        
        return ans
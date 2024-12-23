class Solution:
    def countSubarrays(self, nums: List[int]) -> int:
        ans = 0

        for i in range(1, len(nums) - 1):
            if nums[i] == (nums[i - 1] + nums[i + 1]) * 2:
                ans += 1
        
        return ans
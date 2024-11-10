class Solution:
    def minimumSubarrayLength(self, nums: List[int], k: int) -> int:
        ans = 1 + len(nums)
        x = 0
        l = 0

        for r in range(len(nums)):
            x |= nums[r]
            if x >= k:
                l, x= r, nums[r]
                y = 0
                while x < k:
                    l -= 1
                    y = x
                    x |= nums[l]
                x = y
                ans = min(ans, r - l + 1)
        
        if len(nums) + 1 != ans:
            return ans
        
        return -1
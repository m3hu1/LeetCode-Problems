class Solution:
    def longestSubarray(self, nums: List[int]) -> int:
        ans = 0
        maxi = max(nums)
        curr = 0
        
        for num in nums:
            # curr = 0
            if num == maxi:
                curr += 1
                ans = max(ans, curr)
                continue
            curr = 0
            
        return ans
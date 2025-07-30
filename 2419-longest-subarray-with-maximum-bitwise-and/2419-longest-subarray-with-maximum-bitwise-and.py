class Solution:
    def longestSubarray(self, nums: List[int]) -> int:
        maxi = max(nums)
        ans = 1
        prev, cnt = -1, 0
        
        for num in nums:
            if num == maxi:
                if num == prev: cnt += 1
                else: cnt = 1
            else:
                ans = max(ans, cnt)
                cnt = 0              
            prev = num

        ans = max(ans, cnt)            

        return ans
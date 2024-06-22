class Solution:
    def numberOfSubarrays(self, nums: List[int], k: int) -> int:
        def helper(k):
            l, r = 0, 0
            curr = 0
            ans = 0

            while r < len(nums):
                curr += nums[r] % 2
                while curr > k:
                    curr -= nums[l] % 2
                    l += 1
                ans += r - l + 1
                r += 1

            return ans
        
        return helper(k) - helper(k - 1)